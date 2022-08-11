#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "input_control.h"
#include "sketch.h"

/*В функции используются:
size - размер загаданного слова
letter - для вводимого символа
массив player_word - вводится из внешней функции, хранит угаданные игроком буквы и символы "_" для неугаданных букв
массив word_to guess - вводится из внешней функции, хранит загаданное слово
game_exit - маркер выбора опции "Выход"*/

//счетчики:
/*errors - для ошибок; guessed - для угаданных букв; 
stop_game - для остановки, считает количество угаданных букв; flag - вспомогательный маркер;
repeat - счетчик повтора букв;*/

void game_process(unsigned int size, char *player_word, char *word_to_guess){
    
    unsigned int errors = 0, guessed = 0, stop_game = 0, flag = 0, repeat = 0;
    unsigned int attempt_flag = 0; //+
    unsigned int try = 0; //+
    char abc[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //разрешенные для ввода символы 
    char stat[25] = {'0'}; //+
    FILE *statistics = fopen("src/temp/statistics", "w"); //+ для записи статистики игрока
     
    sketch(0);
                
    while(size != 0 && errors < 9 && stop_game < size){
        puts("Введите букву. Разрешены символы: "); 
        puts(abc);
        printf("\n");
        
        //проверка ввода  
        char letter = input_control();        
        if (letter != '\0'){
                
            //проверка наличия такой буквы в загаданном слове
            for (int i = 0; i < size; i++){
            
                //если буква повторяется, засчитывается ошибка
                if (player_word[i] == letter){
                    errors++;
                    attempt_flag++; //+
                    repeat++;
                    puts("Ошибка! Такая буква уже есть\n"); break;
                }
                flag++; /*маркер: были в цикле и проверили, что введенная буква  уже угаданная и надо отметить, что еще одной такой буквы нет*/
            
                //если такая буква есть в загаданном слове, она отображается в массиве для вводимых букв
                if (word_to_guess[i] == letter || word_to_guess[i] == letter + 32){
                    player_word[i] = word_to_guess[i];
                    guessed++;                               
                }                   
            }
        }
        //если введен запрещенный символ, засчитывается ошибка
        else {
            errors++;   
            attempt_flag++; //+         
        }
        
        //если буква не совпадает с элементом массива либо повторяется, либо введен запрещенный символ, счетчик ошибок увеличивается        
        if (guessed == 0 && flag != 0 && repeat == 0){
            errors++;
            attempt_flag++; //+
            puts("Ошибка!");
            printf("\n");
        } 
        
        stop_game += guessed; //считает количество угаданных букв
               
        //обнуление маркеров для следующего ввода символа
        if (guessed > 0){
                puts("Такая буква есть!"); 
                guessed = 0;
        }         
        repeat = 0;
        if (flag != 0)
            flag = 0;  
            
        if (attempt_flag > 0){
            stat[try] = '-';
            attempt_flag = 0;
        }
        else {
            stat[try] = '+';
        }
        fprintf(statistics, "%c", stat[try]);
        try++;
               
        //результат ввода на массиве для вводимых букв
        puts(player_word); 
        printf("\n");                
        printf("Ошибок: %u\n\n", errors);        
        sketch(errors);
        printf("\n");        
        printf("________________\n");         
        //puts(stat);                
    }    
    fclose(statistics);
    
    //результат игрока
    if (errors < 9 && stop_game == size){
        puts("Победа!");
    }
    else { 
       puts("Поражение...");    
    } 
}
