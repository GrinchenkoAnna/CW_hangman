#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>

int hidden_word(unsigned int language, wchar_t *choice){
    setlocale(LC_ALL, "");

    unsigned int number_of_words = 0; //количество строк в файле
    unsigned int word_choice = 0; //номер строки с загаданным словом
    unsigned int topic_choice = UINT_MAX; //номер темы
    unsigned int flag = 0;
    unsigned int try = 1;
    

    char filename[50] = {'0'};
    char filename0[50] = "src/words/empty";
    char filename1[50] = "src/words/nature_";
    char filename2[50] = "src/words/weather_";
    char filename3[50] = "src/words/animals_";
    char filename4[50] = "src/words/pets_";
    char filename5[50] = "src/words/birds_";
    char filename6[50] = "src/words/reptiles_";
    char filename7[50] = "src/words/sea_creatures_";
    char filename8[50] = "src/words/trees_";
    char filename9[50] = "src/words/fruits_";
    char filename10[50] = "src/words/berries_";
    char filename11[50] = "src/words/all_topics_";
    char lang1[4] = "rus";
    char lang2[3] = "en";

    wchar_t ch = L'0';
    wchar_t second_chance = L'0'; //для повтора ввода после ошибки    

    FILE* words;

    while (topic_choice > 12){

        if (language == 1){
            if (try == 1){
                strcat(filename1, lang1);
                strcat(filename2, lang1);
                strcat(filename3, lang1);
                strcat(filename4, lang1);
                strcat(filename5, lang1);
                strcat(filename6, lang1);
                strcat(filename7, lang1);
                strcat(filename8, lang1);
                strcat(filename9, lang1);
                strcat(filename10, lang1);
                strcat(filename11, lang1);
            }
                    
            wprintf(L"Выберите тему:\n 1. Природа\n 2. Погода\n 3. Животные\n \
4. Домашние животные\n 5. Птицы\n 6. Рептилии\n 7. Морские обитатели\n \
8. Деревья\n 9. Фрукты\n10. Ягоды\n11. Все подряд\n12. Выход\n\
Введите соответствующую цифру и нажмите Enter для подтверждения выбора\n");
            wscanf(L"%u", &topic_choice);
            while ( (ch = getwchar()) != WEOF && ch != L'\n'){};
        }

        if (language == 2){
            if (try == 1){
                strcat(filename1, lang2);
                strcat(filename2, lang2);
                strcat(filename3, lang2);
                strcat(filename4, lang2);
                strcat(filename5, lang2);
                strcat(filename6, lang2);
                strcat(filename7, lang2);
                strcat(filename8, lang2);
                strcat(filename9, lang2);
                strcat(filename10, lang2);
                strcat(filename11, lang2);
            } 
               
            wprintf(L"Choose a topic:\n 1. Nature\n 2. Weather\n 3. Animals\n \
4. Pets\n 5. Birds\n 6. Reptiles\n 7. Sea creatures\n 8. Trees\n 9. Fruits\n\
10. Berries\n11. Mixed\n12. Exit\nEnter the corresponding number and press \
Enter to confirm\n");
            wscanf(L"%u", &topic_choice);
            while ( (ch = getwchar()) != WEOF && ch != L'\n'){};
        }

        switch (topic_choice){
            case 0: strcpy(filename, filename0); break;
            case 1: strcpy(filename, filename1); break;
            case 2: strcpy(filename, filename2); break;
            case 3: strcpy(filename, filename3); break;
            case 4: strcpy(filename, filename4); break;
            case 5: strcpy(filename, filename5); break;
            case 6: strcpy(filename, filename6); break;
            case 7: strcpy(filename, filename7); break;
            case 8: strcpy(filename, filename8); break;
            case 9: strcpy(filename, filename9); break;
            case 10: strcpy(filename, filename10); break;
            case 11: strcpy(filename, filename11); break;
            case 12: return 1;
            default: wprintf(L"Невозможно сделать выбор: такой цифры нет в \
меню/It is impossible to make a choice: there is no such number in the menu\n");
                    flag++; break;
        }
        
        //введен неверный символ
        if (flag != 0){
            wprintf(L"Ошибка! Тема игры не определена/Error! The game's topic \
is not defined\n");
            wprintf(L"Введите 'Y' ('y'), если хотите попробовать еще раз, либо \
любой другой символ для выхода из игры\nEnter 'Y' ('y') if you want to try \
again or any other character to exit the game\n");
            wscanf(L"%lc", &second_chance);
            if (second_chance == L'\n' || (second_chance != L'Y' 
                    && second_chance != L'y')){
                return 1;
            } else {
                while ( (ch = getwchar()) != WEOF && ch != L'\n'){};
                topic_choice = 13;
                try++;
            }
        flag = 0;
        }
    }
    words = fopen(filename, "r");

    //количество строк
    while((ch = fgetwc(words)) != WEOF){
         if (ch == L'\n'){
             number_of_words++;
         }
    }

    if (number_of_words == 0){
        wprintf(L"Открыт пустой файл!\n");
        return 1;
    }

    srand(time(NULL));
    word_choice = rand()%number_of_words; //выбор номера строки со словом
    if (word_choice == 0){
        word_choice = number_of_words;
    }
        
    fseek(words, 0, SEEK_SET); //указатель на начало файла
    for (int i = 0; i < word_choice; i++){
        fwscanf(words, L"%ls", choice); //запись в массив выбранного слова  
    }

    fclose(words);
    wprintf(L"%ls\n", choice);

    return 0;
}
