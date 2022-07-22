#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "sketch.h"
#include "hidden_word.h"
#include "input_control.h"

int main(){
    
    //для выбора слова из файла 
    char word[15] = {0}; //загаданное слово
    unsigned int word_size = 0; //размер загаданного слова
    
    //FILE* words;
    //number_of_words - количество строк в файле, word_choise - номер строки с загаданным словом
    //unsigned int number_of_words = 0, word_choise = 0; //количество строк в файле    
        
    //для процесса игры 
    char abc[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //разрешенные для ввода символы 
    
    //счетчики:
    /*error - для ошибок; guessed - для угаданных букв; 
    stop - для остановки, считает количество угаданных букв; flag - вспомогательный маркер;
    repeat - счетчик повтора букв*/
    unsigned int error = 0, guessed = 0, stop = 0, flag = 0, repeat = 0;

    //подключение файла   
    hidden_word(word);   
    word_size = strlen(word); 
        
    char *entered_word = (char*)calloc(word_size, sizeof(char)); /*выделение памяти для массива для вводимых букв*/
    memset(entered_word, '_', word_size); //заполнение массивва для вводимых букв символами "_"
    puts(entered_word);
    
    //процесс игры        
    while(word_size != 0 && error < 9 && stop < word_size){
        puts("Введите букву. Разрешены символы: "); 
        puts(abc);
        printf("\n");
        
        //проверка ввода  
        char letter = input_control();
        if (letter != '\0'){
                
            //проверка наличия такой буквы в загаданном слове
            for (int i = 0; i < word_size; i++){
            
                //если буква повторяется, засчитывается ошибка
                if (entered_word[i] == letter){
                    error++;
                    repeat++;
                    puts("Ошибка! Такая буква уже есть\n"); break;
                }
                flag++; /*маркер: были в цикле и проверили, что введенная буква  уже угаданная и надо отметить, что еще одной такой буквы нет*/
            
                //если такая буква есть в загаданном слове, она отображается в массиве для вводимых букв
                if (word[i] == letter || word[i] == letter + 32){
                    entered_word[i] = word[i];
                    guessed++;                               
                }                   
            }
        }
        //если введен запрещенный символ, засчитывается ошибка
        else {
            error++;            
        }
        
        //если буква не совпадает с элементом массива либо повторяется, либо введен запрещенный символ, счетчик ошибок увеличивается        
        if (guessed == 0 && flag != 0 && repeat == 0){
            error++;
            puts("Ошибка!");
            printf("\n");
        } 
        
        stop += guessed; //считает количество угаданных букв
               
        //обнуление маркеров для следующего ввода символа
        if (guessed > 0){
                puts("Такая буква есть!"); 
                guessed = 0;
        }         
        repeat = 0;
        if (flag != 0)
            flag = 0;       
        
        //результат ввода на массиве для вводимых букв
        puts(entered_word); 
        printf("\n");                
        printf("Ошибок: %u\n\n", error);        
        sketch(error);
        printf("\n");
        printf("________________\n");        
    }
    
    printf("****************\n\n");
    printf("Ошибок всего: %u\n", error); 
    
    //результат игрока
    if (error < 9 && stop == word_size){
        puts("Победа!");
    }
    else
        puts("Поражение...");
      
    free(entered_word); //освобождение памяти, выделенной для массива для ввода
       
    return 0;
}
