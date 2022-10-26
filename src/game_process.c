#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#include "game_process.h"
#include "input_control.h"
#include "sketch.h"


/*В функции используются:
size - размер загаданного слова
letter - для вводимого символа
массив player_word - вводится из внешней функции,
    хранит угаданные игроком буквы и символы "_" для неугаданных букв
массив word_to guess - вводится из внешней функции, хранит загаданное слово
массив stat - для записи статистики игрока
массивы victory, defeat, total_attempts, input_stat, input_accuracy - 
    для вывода результатов игры
game_exit - маркер выбора опции "Выход"*/

//счетчики:
/*errors - для ошибок; guessed - для угаданных букв;
stop_game - для остановки, считает количество угаданных букв;
flag - вспомогательный маркер; repeat - счетчик повтора букв;
attempt_flag - маркер ошибки игрока; try - номер попытки игрока;
accuracy - точность игрока*/

void game_process(unsigned int size, unsigned int language,
        wchar_t *player_word, wchar_t *word_to_guess){

    setlocale(LC_ALL, "");
    unsigned int errors = 0, guessed = 0, stop_game = 0, flag = 0, repeat = 0,
            attempt_flag = 0, try = 0;
    float accuracy = 0; 
    wchar_t *stat = (wchar_t*)calloc(25, sizeof(wchar_t));
    wmemset(stat, '0', 25);
    
    wchar_t victory[8] = {0};
    wchar_t defeat[13] = {0};
    wchar_t total_attempts[16] = {0};
    wchar_t input_stat[18] = {0};
    wchar_t input_accuracy[10] = {0};
    
    wchar_t victory_rus[8] = L"Победа!";
    wchar_t defeat_rus[13] = L"Поражение...";
    wchar_t total_attempts_rus[16] = L"Всего попыток:";
    wchar_t input_stat_rus[18] = L"Статистика ввода:";
    wchar_t input_accuracy_rus[10] = L"Точность:";
    
    wchar_t victory_en[8] = L"Victory!";
    wchar_t defeat_en[13] = L"Defeat...";
    wchar_t total_attempts_en[16] = L"Total attempts:";
    wchar_t input_stat_en[18] = L"Input statistics:";
    wchar_t input_accuracy_en[10] = L"Accuracy:";

    //файл для записи статистики игрока
    FILE *statistics = fopen("src/temp/statistics", "w");

    sketch(0);    
                
    while(size != 0 && errors < 9 && stop_game < size){
    
        if (language == 1){
        
            wcscpy(victory, victory_rus);
            wcscpy(defeat, defeat_rus);
            wcscpy(total_attempts, total_attempts_rus);
            wcscpy(input_stat, input_stat_rus);
            wcscpy(input_accuracy, input_accuracy_rus);
            
            wprintf(L"Введите букву. Разрешены символы: \n");
            wprintf(L"абвгдежзийклмнопрстуфхцчшщъыьэюя\n\
АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ\n");
        }        
        
        if (language == 2){
        
            wcscpy(victory, victory_en);
            wcscpy(defeat, defeat_en);
            wcscpy(total_attempts, total_attempts_en);
            wcscpy(input_stat, input_stat_en);
            wcscpy(input_accuracy, input_accuracy_en);
            
            wprintf(L"Type a letter. The following symbols are allowed: \n");
            wprintf(L"abcdefghijklmnopqrstuvwxyz\n\
ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
        }

        //проверка ввода
        wchar_t letter = input_control(language);
        if (letter != '\0'){

            //проверка наличия такой буквы в загаданном слове
            for (int i = 0; i < size; i++){

                //если буква повторяется, засчитывается ошибка
                if (player_word[i] == letter
                        || player_word[i] == towlower(letter)){
                    errors++;
                    attempt_flag++;
                    repeat++;
                    if (language == 1){
                        wprintf(L"Ошибка! Такая буква уже есть\n"); break;
                    }
                    if (language == 2){
                        wprintf(L"Error! Such a letter already exists in the\
 word\n"); 
                    break;
                    }
                    
                }
                flag++; //маркер: буква не совпадает с уже угаданной

                //если такая буква есть в загаданном слове,
                //она отображается в массиве для вводимых букв
                if (word_to_guess[i] == letter
                        || word_to_guess[i] == towlower(letter)){
                    player_word[i] = word_to_guess[i];
                    guessed++;
                }
            }
        } else {
            errors++;
            attempt_flag++;
        } //если введен запрещенный символ, засчитывается ошибка

        //если буква не совпадает с элементом массива либо повторяется,
        //либо введен запрещенный символ, счетчик ошибок увеличивается
        if (guessed == 0 && flag != 0 && repeat == 0){
            errors++;
            attempt_flag++;
            if (language == 1){
                wprintf(L"Ошибка!\n");
            }
            if (language == 2){
                wprintf(L"Error!\n");
            }
        }

        stop_game += guessed; //считает количество угаданных букв

        //обнуление маркеров для следующего ввода символа
        if (guessed > 0){
            if (language == 1){
                wprintf(L"Такая буква есть!\n");
            }
            if (language == 2){
                wprintf(L"Guessed!\n");
            }
                guessed = 0;
        }
        
        repeat = 0;
        if (flag != 0)
            flag = 0;

        //запись статистики
        if (attempt_flag > 0){
            stat[try] = '-';
            attempt_flag = 0;
        } else {
            stat[try] = '+';
        }
        try++;

        //результат ввода на массиве для вводимых букв
        wprintf(L"%ls\n", player_word);
        sketch(errors);
        wprintf(L"\n");
        wprintf(L"________________\n");        
    }
    fwprintf(statistics, stat); //запись статистики в файл
    fclose(statistics);
    
    //результат игрока
    if (errors < 9 && stop_game == size){
        wprintf(L"%ls\n", victory); 
    } else {
        wprintf(L"%ls\n", defeat);
    }
    
    //статистика
    wprintf(L"%ls %lu\n", total_attempts, try);
    wprintf(L"%ls ", input_stat);
        
    for (int i = 0; i < 25; i++){
        if (stat[i] != '0'){
            wprintf(L"%lc", stat[i]);
        } else {
            wprintf(L"\n"); break;
        }
    }
    accuracy = (float)(try-errors)/try;    
    wprintf(L"%ls %.4lf\n", input_accuracy, accuracy);
    
    free(stat);
    stat = NULL;
}
