#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>

#include "language.h"

unsigned int language(){

    unsigned int language_choice_int = 0; //хранит номер языка
    unsigned int flag = 0; //маркер: ввод неверного символа
    wchar_t language_choice;
    wchar_t second_chance = L'0'; //для повтора ввода после ошибки
    wchar_t ch = L'0'; //для очистки буфера

    while (language_choice != '1' && language_choice != '2'
            && language_choice != '0' && language_choice != '3'){

        wprintf(L"Выберите язык:/Choose your language:\n 1. Русский/Russian\n \
2. Английский/English\n 3. Выход/Exit\nВведите соответствующую цифру и нажмите \
Enter для подтверждения выбора\nEnter the corresponding number and press Enter \
to confirm\n");
        wscanf(L"%lc", &language_choice);
        while ( (ch = getwchar()) != WEOF && ch != L'\n'){};

        switch (language_choice){
        case '1': wprintf(L"\n"); break;
        case '2': wprintf(L"\n"); break;
        case '3': language_choice = '0'; break;
        default: wprintf(L"Невозможно сделать выбор: такой цифры нет в меню \
или была допущена ошибка во время ввода/It is impossible to make a choice: \
there is no such number in the menu or there was an error when typing\n");
                flag++; break;
        }

        //введен неверный символ
        if (flag != 0){
            flag = 0;
            wprintf(L"Ошибка! Язык игры не определен/Error! The language of \
the game is not defined\n");
            wprintf(L"Введите 'Y' ('y'), если хотите попробовать еще раз, либо \
любой другой символ для выхода из игры\nEnter 'Y' ('y') if you want to try \
again or any other character to exit the game\n");
            wscanf(L"%lc", &second_chance);
            if (second_chance == L'\n' || (second_chance != L'Y'
                    && second_chance != L'y')){
                language_choice = '0';
            } else {
                while ( (ch = getwchar()) != WEOF && ch != L'\n'){};
                language_choice = 'y';
            }
        }
    }

    language_choice_int = language_choice - '0';
    return language_choice_int;
}
