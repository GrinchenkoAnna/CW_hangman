#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "hidden_word.h"
#include "game_process.h"

int main(){
    setlocale(LC_ALL, "");
    
    //выбор языка
    unsigned int language_choice = UINT_MAX; 
    unsigned int flag = 0;
    wchar_t second_chance = '0';
    wchar_t ch = L'0';              
    
    //Выбор языка - TODO: выделить в отдельный модуль
    while (language_choice == UINT_MAX){
        wprintf(L"Выберите язык:/Choose your language:\n 1. Русский/Russian\n 2. Английский/English\n 3. Выход/Exit\nи введите соответствующую цифру/and enter the corresponding number\n"); 
        wscanf(L"%u", &language_choice);
        while ( (ch = getwchar()) != WEOF && ch != L'\n'){}; //очистка буфера после wscanf  
        switch (language_choice) {            
            case 1: wprintf(L"\n"); break;
            case 2: wprintf(L"\n"); break;
            case 3: return 1;       
            default: wprintf(L"Необходимо ввести цифру из списка!\n"); flag++; break;
        } 
        if (flag != 0){
            flag = 0; 
            wprintf(L"Ошибка! Не определен язык игры/Error! The language of the game is not defined\n");
            wprintf(L"Введите 'Y' ('y'), если хотите попробовать еще раз, либо любой другой символ для выхода из игры\nEnter 'Y' ('y') if you want to try again or any other character to exit the game\n");            
            wscanf(L"%lc", &second_chance);
            if (second_chance == L'\n' || (second_chance != L'Y' && second_chance != L'y')){
                return 1;
            }
            else {
                while ( (ch = getwchar()) != WEOF && ch != L'\n'){}; //очистка буфера после wscanf 
                language_choice = UINT_MAX;
            }            
        }        
    } 
    wprintf(L"Выбран язык игры: %u\n", language_choice);  
                    
    //для выбора слова из файла 
    wchar_t word[15] = {0}; //загаданное слово
    unsigned int word_size = 0; //размер загаданного слова    
        
    //подключение файла   
    if (hidden_word(language_choice, word) == 0){
            
        word_size = wcslen(word); 
        wprintf(L"Размер загаданного слова: %ld\n", word_size);
        
        wchar_t *entered_word = (wchar_t*)calloc(word_size + 1, sizeof(wchar_t)); /*выделение памяти для массива для вводимых букв*/
        wmemset(entered_word, L'_', word_size); //заполнение массивва для вводимых букв символами "_"
        
        wprintf(L"%ls\n", entered_word);
    
        game_process(word_size, entered_word, word); 
    
        free(entered_word); //освобождение памяти, выделенной для массива для ввода
        
        entered_word = NULL;
    }
         
    return 0;
}
