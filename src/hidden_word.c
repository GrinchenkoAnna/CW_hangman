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
    char filename[50] = {0};
    char *filename0[50] = {0};
    char *filename1[50] = {0}; 
    char *filename2[50] = {0}; 
    char *filename3[50] = {0}; 
    char *filename4[50] = {0};
    char *filename5[50] = {0};
    char *filename6[50] = {0};
    char *filename7[50] = {0}; 
    char *filename8[50] = {0};
    char *filename9[50] = {0}; 
    char *filename10[50] = {0};
    char *filename11[50] = {0};
    
    if (language == 1){
        filename0[50] = "src/words/words_rus/empty"; 
        filename1[50] = "src/words/words_rus/nature_rus"; 
        filename2[50] = "src/words/words_rus/weather_rus"; 
        filename3[50] = "src/words/words_rus/animals_rus"; 
        filename4[50] = "src/words/words_rus/pets_rus"; 
        filename5[50] = "src/words/words_rus/birds_rus"; 
        filename6[50] = "src/words/words_rus/reptiles_rus";   
        filename7[50] = "src/words/words_rus/sea_creatures_rus"; 
        filename8[50] = "src/words/words_rus/trees_rus"; 
        filename9[50] = "src/words/words_rus/fruits_rus"; 
        filename10[50] = "src/words/words_rus/berries_rus"; 
        filename11[50] = "src/words_rus/all_topics_rus"; 
    }
    else {
        filename0[50] = "src/words/words_en/empty"; 
        filename1[50] = "src/words/words_en/nature_en"; 
        filename2[50] = "src/words/words_en/weather_en"; 
        filename3[50] = "src/words/words_en/animals_en"; 
        filename4[50] = "src/words/words_en/pets_en"; 
        filename5[50] = "src/words/words_en/birds_en"; 
        filename6[50] = "src/words/words_en/reptiles_en";   
        filename7[50] = "src/words/words_en/sea_creatures_en"; 
        filename8[50] = "src/words/words_en/trees_en"; 
        filename9[50] = "src/words/words_en/fruits_en"; 
        filename10[50] = "src/words/words_en/berries_en"; 
        filename11[50] = "src/words/words_en/all_topics_en";
    }
    
    unsigned int topic_choice = UINT_MAX;
    unsigned int flag = 0;
    FILE* words;
    
    wchar_t ch = L'0';
    
    //Выбор файла (темы)
    while (topic_choice == UINT_MAX){
        wprintf(L"Выберите тему игры:\n 1. Природа\n 2. Погода\n 3. Животные\n 4. Домашние животные\n 5. Птицы\n 6. Рептилии\n 7. Морские обитатели\n 8. Деревья\n 9. Фрукты\n10. Ягоды\n11. Все подряд\n12. Выход\n");
        wscanf(L"%u", &topic_choice);       
        while ( (ch = getwchar()) != WEOF && ch != L'\n'){}; //очистка буфера после wscanf 
        switch (topic_choice) {
            case 0: strcpy(filename, *filename0); break;
            case 1: strcpy(filename, *filename1); break;
            case 2: strcpy(filename, *filename2); break;
            case 3: strcpy(filename, *filename3); break;
            case 4: strcpy(filename, *filename4); break;
            case 5: strcpy(filename, *filename5); break;
            case 6: strcpy(filename, *filename6); break;    
            case 7: strcpy(filename, *filename7); break;
            case 8: strcpy(filename, *filename8); break;
            case 9: strcpy(filename, *filename9); break;
            case 10: strcpy(filename, *filename10); break;
            case 11: strcpy(filename, *filename11); break; 
            case 12: return 1;       
            default: wprintf(L"Необходимо ввести цифру из списка!\n"); flag++; break;
        }        
    }    
    
    words = fopen(filename, "rt, css = UTF-8");
    
    //проверка успешного открытия файла
    if (!(words) && flag != 0){ 
        wprintf(L"Ошибка открытия файла!\n");
        return 1;
    }
    
    //количество строк  
    while(!(feof(words))){
         if (fgetwc(words) == '\n'){
             number_of_words++;
         }
    } 
    wprintf(L"Всего слов: %d\n", number_of_words);    
    
    if (number_of_words == 0 && flag == 0){
        wprintf(L"Открыт пустой файл!\n");
        return 1;
    }
    
    srand(time(NULL));
    word_choice = rand()%number_of_words; //выбор номера строки со словом
    if (word_choice == 0){
        word_choice = number_of_words;
    }
    wprintf(L"Выбрано слово номер: %d из темы номер %d\n", word_choice, topic_choice);
    //wprintf(L"Выбрано слово номер: %d\n", word_choice);
        
    fseek(words, 0, SEEK_SET); //указатель на начало файла
    for (int i = 0; i < word_choice; i++){
        fwscanf(words, L"%ls", choice); //запись в массив выбранного слова        
    }
    
    fclose(words);     
    wprintf(L"%ls\n", choice); 
    wprintf(L"Размер выбранного слова: %ld\n", wcslen(choice));
    
    return 0;
}
