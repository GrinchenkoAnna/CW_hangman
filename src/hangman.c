#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "language.h"
#include "hidden_word.h"
#include "game_process.h"

int main(){
    setlocale(LC_ALL, "");

    //выбор языка
    unsigned int lang = language();
    if (lang == 0){ return 1; }

    //для выбора слова из файла
    wchar_t word[15] = {0}; //загаданное слово
    unsigned int word_size = 0; //размер загаданного слова

    //подключение файла
    if (hidden_word(lang, word) == 0){

        word_size = wcslen(word);

        /*выделение памяти для массива для вводимых букв*/
        wchar_t *entered_word = (wchar_t*)calloc(word_size + 1,
                sizeof(wchar_t));

        wmemset(entered_word, L'_', word_size);

        wprintf(L"%ls\n", entered_word);

        game_process(word_size, lang, entered_word, word);

        free(entered_word);
        entered_word = NULL;
    }

    return 0;
}
