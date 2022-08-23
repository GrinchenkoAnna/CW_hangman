#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>

int hidden_word(char *choice){

    FILE* words;    
    
    unsigned int number_of_words = 0; //количество строк в файле
    unsigned int word_choice = 0; //номер строки с загаданным словом
    char filename[40] = {0};
    char filename0[40] = "src/english/words/empty"; 
    char filename1[40] = "src/english/words/nature_en"; 
    char filename2[40] = "src/english/words/weather_en"; 
    char filename3[40] = "src/english/words/animals_en"; 
    char filename4[40] = "src/english/words/pets_en"; 
    char filename5[40] = "src/english/words/birds_en"; 
    char filename6[40] = "src/english/words/reptiles_en";   
    char filename7[40] = "src/english/words/sea_creatures_en"; 
    char filename8[40] = "src/english/words/trees_en"; 
    char filename9[40] = "src/english/words/fruits_en"; 
    char filename10[40] = "src/english/words/berries_en"; 
    char filename11[40] = "src/english/words/all_topics_en";  
    
    unsigned int topic_choise = UINT_MAX;
    unsigned int flag = 0;
    
    char ch = 0;
    
    //Выбор файла (темы)
    while (topic_choise == UINT_MAX){
        printf("Выберите тему игры и введите соответствующую цифру:\n 1. Природа\n 2. Погода\n 3. Животные\n 4. Домашние животные\n 5. Птицы\n 6. Рептилии\n 7. Морские обитатели\n 8. Деревья\n 9. Фрукты\n10. Ягоды\n11. Все подряд\n12. Выход\n");
        scanf("%d[\n]", &topic_choise); 
        while ( (ch = getchar()) != EOF && ch != '\n'){}; //очистка буфера после scanf 
        switch (topic_choise) {
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
            default: printf("Необходимо ввести цифру из списка!\n"); flag++; break;
        }
    }
    
    words = fopen(filename, "r");
        
    //проверка успешного открытия файла
    if (!(words) && flag!=0){ 
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    //количество строк  
    while (fscanf(words, "%s", choice) != EOF){
        number_of_words++;
    }
    
    if (number_of_words == 0 && flag == 0){
        printf("Открыт пустой файл!\n");
        return 1;
    }
    
    srand(time(NULL));
    word_choice = rand()%number_of_words; //выбор номера строки со словом
    printf("Выбрано слово номер: %d из темы номер %d\n", word_choice, topic_choise);
        
    fseek(words, 0, SEEK_SET); //указатель на начало файла
    for (int i = 0; i < word_choice; i++){
        fscanf(words, "%s", choice); //запись в массив выбранного слова        
    }
    
    fclose(words);   
    
    puts(choice);
    
    return 0;
}
