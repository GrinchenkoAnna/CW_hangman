#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "hidden_word.h"
#include "game_process.h"

int main(){
    
    //для выбора слова из файла 
    char word[15] = {0}; //загаданное слово
    unsigned int word_size = 0; //размер загаданного слова
        
    //подключение файла   
    if (hidden_word(word) == 0){
        word_size = strlen(word); 
        
        char *entered_word = (char*)calloc(word_size, sizeof(char)); /*выделение памяти для массива для вводимых букв*/
        memset(entered_word, '_', word_size); //заполнение массивва для вводимых букв символами "_"
        puts(entered_word);
    
        game_process(word_size, entered_word, word); 
    
        free(entered_word); //освобождение памяти, выделенной для массива для ввода
    }
         
    return 0;
}
