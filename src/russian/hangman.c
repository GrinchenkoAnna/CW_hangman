#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#include "hidden_word.h"
#include "game_process.h"

int main(){
    setlocale(LC_CTYPE, "");
    
    //для выбора слова из файла 
    wchar_t word[15] = {0}; //загаданное слово
    unsigned int word_size = 0; //размер загаданного слова
        
    //подключение файла   
    if (hidden_word(word) == 0){
        word_size = wcslen(word); 
        wprintf(L"Размер загаданного слова: %d\n", word_size);
        
        wchar_t *entered_word = (wchar_t*)calloc(word_size, sizeof(wchar_t)); /*выделение памяти для массива для вводимых букв*/
        wmemset(entered_word, L'_', word_size); //заполнение массивва для вводимых букв символами "_"
        wprintf(L"%ls\n", entered_word);
    
        game_process(word_size, entered_word, word); 
    
        free(entered_word); //освобождение памяти, выделенной для массива для ввода
    }
         
    return 0;
}
