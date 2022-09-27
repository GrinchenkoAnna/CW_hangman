#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#include "input_control.h"
#include "sketch.h"


/*В функции используются:
size - размер загаданного слова
letter - для вводимого символа
массив player_word - вводится из внешней функции,
    хранит угаданные игроком буквы и символы "_" для неугаданных букв
массив word_to guess - вводится из внешней функции, хранит загаданное слово
массив abc - разрешенные для ввода символы
массив stat - для записи статистики игрока
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

    //файл для записи статистики игрока
    FILE *statistics = fopen("src/temp/statistics", "w");

    sketch(0);
                
    while(size != 0 && errors < 9 && stop_game < size){
        wprintf(L"Введите букву. Разрешены символы: \n");

        if (language == 1){
            wprintf(L"абвгдежзийклмнопрстуфхцчшщъыьэюя\n\
АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ\n");
        }
        if (language == 2){
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
                    wprintf(L"Ошибка! Такая буква уже есть\n"); break;
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
            wprintf(L"Ошибка!\n");
        }

        stop_game += guessed; //считает количество угаданных букв

        //обнуление маркеров для следующего ввода символа
        if (guessed > 0){
                wprintf(L"Такая буква есть!\n");
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
        //wprintf(L"Ошибок: %lu\n\n", errors);
        sketch(errors);
        wprintf(L"\n");
        wprintf(L"________________\n");
    }
    fwprintf(statistics, stat); //запись статистики в файл
    fclose(statistics);
        
    //результат игрока
    if (language == 1){
        if (errors < 9 && stop_game == size){
            wprintf(L"Победа!\n");
        } else {
            wprintf(L"Поражение...\n");
        }
        wprintf(L"Всего попыток: %lu\n", try);
        wprintf(L"Статистика ввода: ");
        for (int i = 0; i < 25; i++){
            if (stat[i] != '0'){
                wprintf(L"%lc", stat[i]);
            } else {
                wprintf(L"\n"); break;
            }
        }
        accuracy = (float)(try-errors)/try;
        wprintf(L"Точность: %.4lf\n", accuracy);
    }
    
    if (language == 2){
        if (errors < 9 && stop_game == size){
            wprintf(L"Victory!\n");
        } else {
            wprintf(L"Defeat...\n");
        }
        wprintf(L"Total attempts: %lu\n", try);
        wprintf(L"Input statistics: ");
        for (int i = 0; i < 25; i++){
            if (stat[i] != '0'){
                wprintf(L"%lc", stat[i]);
            } else {
                wprintf(L"\n"); break;
            }
        }
        accuracy = (float)(try-errors)/try;
        wprintf(L"Accuracy: %.4lf\n", accuracy);
    }
    
    free(stat);
    stat = NULL;
}
