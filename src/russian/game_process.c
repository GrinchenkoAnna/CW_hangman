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
массив player_word - вводится из внешней функции, хранит угаданные игроком буквы и символы "_" для неугаданных букв
массив word_to guess - вводится из внешней функции, хранит загаданное слово
массив abc - разрешенные для ввода символы 
массив stat - для записи статистики игрока
game_exit - маркер выбора опции "Выход"*/

//счетчики:
/*errors - для ошибок; guessed - для угаданных букв; 
stop_game - для остановки, считает количество угаданных букв; flag - вспомогательный маркер;
repeat - счетчик повтора букв; attempt_flag - маркер ошибки; try - (номер попытки игрока)-1*/

void game_process(unsigned int size, wchar_t *player_word, wchar_t *word_to_guess){
    
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    unsigned int errors = 0, guessed = 0, stop_game = 0, flag = 0, repeat = 0, attempt_flag = 0, try = 0;
    wchar_t abc[33] = {L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я'}; 
    wchar_t *stat = (wchar_t*)calloc(25, sizeof(wchar_t)); 
    wmemset(stat, '0', 25); 
    
    FILE *statistics = fopen("src/temp/statistics", "w"); //файл для записи статистики игрока
     
    sketch(0);
                
    while(size != 0 && errors < 9 && stop_game < size){
        wprintf(L"Введите букву. Разрешены символы: \n"); 
        wprintf(L"%ls\n", abc);
        
        //проверка ввода  
        wchar_t letter = input_control();
        wprintf(L"Считана буква: %lc\n", letter);
        if (letter != '\0'){
                
            //проверка наличия такой буквы в загаданном слове
            for (int i = 0; i < size; i++){
            
                //если буква повторяется, засчитывается ошибка
                if (player_word[i] == letter){
                    errors++;
                    attempt_flag++; 
                    repeat++;
                    printf("Ошибка! Такая буква уже есть\n"); break;
                }
                flag++; /*маркер: были в цикле и проверили, что введенная буква  уже угаданная и надо отметить, что еще одной такой буквы нет*/
            
                //если такая буква есть в загаданном слове, она отображается в массиве для вводимых букв
                if (word_to_guess[i] == letter){ //FIXME
                    player_word[i] = word_to_guess[i];
                    guessed++;                               
                }                   
            }
        }
        //если введен запрещенный символ, засчитывается ошибка
        else {
            errors++;   
            attempt_flag++;         
        }
        
        //если буква не совпадает с элементом массива либо повторяется, либо введен запрещенный символ, счетчик ошибок увеличивается        
        if (guessed == 0 && flag != 0 && repeat == 0){
            errors++;
            attempt_flag++; //+
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
        
        //записьстатистики    
        if (attempt_flag > 0){
            stat[try] = '-';
            attempt_flag = 0;
        }
        else {
            stat[try] = '+';
        }
        try++;
               
        //результат ввода на массиве для вводимых букв
        wprintf(L"%ls\n", player_word);
        wprintf(L"Ошибок: %u\n\n", errors);        
        sketch(errors);
        wprintf(L"\n");        
        wprintf(L"________________\n"); 
    }
    fwprintf(statistics, stat); //запись статистики в файл
    fclose(statistics);
    free(stat);
    
    //результат игрока
    if (errors < 9 && stop_game == size){
        wprintf(L"Победа!\n");
    }
    else { 
       wprintf(L"Поражение...\n");    
    } 
}
