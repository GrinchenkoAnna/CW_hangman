#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#include "input_control.h"
#include "sketch.h"

#define RUSSIAN 1
#define ENGLISH 2
#define LANGUAGE ENGLISH

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
repeat - счетчик повтора букв; attempt_flag - маркер ошибки игрока; try - (номер попытки игрока)-1*/

void game_process(unsigned int size, wchar_t *player_word, wchar_t *word_to_guess){
    
    setlocale(LC_ALL, "");
    unsigned int errors = 0, guessed = 0, stop_game = 0, flag = 0, repeat = 0, attempt_flag = 0, try = 0;    
    wchar_t *stat = (wchar_t*)calloc(25, sizeof(wchar_t)); 
    wmemset(stat, '0', 25); 
    
    FILE *statistics = fopen("src/temp/statistics", "w"); //файл для записи статистики игрока
     
    sketch(0);
                
    while(size != 0 && errors < 9 && stop_game < size){
    
        wprintf(L"Введите букву. Разрешены символы: \n"); 
        
        #if LANGUAGE == RUSSIAN
        wchar_t abc_rus[65] = {L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я', L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ж', L'З', L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р', L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ', L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'}; //разрешенные для ввода символы
        wprintf(L"%ls\n", abc_rus);
        
        #elif LANGUAGE == ENGLISH
        wchar_t abc_eng[53] = {L'a', L'b', L'c', L'd', L'e', L'f', L'g', L'h', L'i', L'j', L'k', L'l', L'm', L'n', L'o', L'p', L'q', L'r', L's', L't', L'u', L'v', L'w', L'x', L'y', L'z', L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J', L'K', L'L', L'M', L'N', L'O', L'P', L'Q', L'R', L'S', L'T', L'U', L'V', L'W', L'X', L'Y', L'Z'}; //разрешенные для ввода символы
        wprintf(L"%ls\n", abc_eng);
        #endif
        
        //проверка ввода  
        wchar_t letter = input_control(); 
        //wprintf(L"%lc\n", towupper(letter));     
              
        if (letter != '\0'){
                
            //проверка наличия такой буквы в загаданном слове
            for (int i = 0; i < size; i++){
            
                //если буква повторяется, засчитывается ошибка
                if (player_word[i] == letter || player_word[i] == towlower(letter)){
                    errors++;
                    attempt_flag++; 
                    repeat++;
                    wprintf(L"Ошибка! Такая буква уже есть\n"); break;
                }
                flag++; //маркер: буква не совпадает с уже угаданной
            
                //если такая буква есть в загаданном слове, она отображается в массиве для вводимых букв
                if (word_to_guess[i] == letter || word_to_guess[i] == towlower(letter)){ 
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
        }
        else {
            stat[try] = '+';
        }
        try++;
               
        //результат ввода на массиве для вводимых букв
        wprintf(L"%ls\n", player_word);
        wprintf(L"Ошибок: %lu\n\n", errors);        
        sketch(errors);
        wprintf(L"\n");        
        wprintf(L"________________\n"); 
    }
    fwprintf(statistics, stat); //запись статистики в файл
    fclose(statistics);
    free(stat);
    stat = NULL;
    
    //результат игрока
    if (errors < 9 && stop_game == size){
        wprintf(L"Победа!\n");
    }
    else { 
        wprintf(L"Поражение...\n");    
    } 
}
