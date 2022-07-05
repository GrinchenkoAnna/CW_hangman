#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int hidden_word(char *choice){

    FILE* words;    
    
    unsigned int number_of_words = 0; //количество строк в файле
    unsigned int word_choice = 0; //номер строки с загаданным словом
    
    //проверка успешного открытия файла
    if (!(words = fopen("words_en", "r"))){ 
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    //количество строк  
    while (fscanf(words, "%s", choice) != EOF){
        number_of_words++;
    }
    
    srand(time(NULL));
    word_choice = rand()%number_of_words; //выбор номера строки со словом
    printf("Выбрано слово номер: %d\n", word_choice);
        
    fseek(words, 0, SEEK_SET); //указатель на начало файла
    for (int i = 0; i < word_choice; i++){
        fscanf(words, "%s", choice); //запись в массив выбранного слова        
    }
    
    fclose(words);   
    
    puts(choice);
    
    return 0;
}
