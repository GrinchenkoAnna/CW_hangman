#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sketch(int n){
    switch (n) {
    case 9: printf("\n\n     _\n    / \\\n   |  ()\n   |\\\n  /|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 8: printf("\n    ()\n     |\n    /\n   | \n   |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 7: printf("\n    ()\n     |\n    /\n   | \n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 6: printf("\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 5: printf("  (@)\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 4: printf("  (@)\n (@)()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 3: printf("  (@)\n (@)()\n  (@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;    
    case 2: printf("  (@)\n (@)()\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 1: printf("  (@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 0: printf("  (@)(@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    }
}

int main(){
    
    //для выбора слова из файла 
    char word[10] = {0}; //загаданное слово + вспомогательный массив
    int word_size = 0; //размер загаданного слова
    
    FILE* words;
    int number_of_words = 0; //количество строк в файле
    //char hidden_words[10] = {0}; //вспомогательный массив
    int word_choice = 0; //номер строки с загаданным словом
    
    //для процесса игры 
    char letter; //вводимая буква
    int error = 0; //счетчик ошибок
    int guessed = 0; //счетчик угаданных букв
    //int different = 0; //счетчик неугаданных букв
    int stop = 0; //для остановки, считает количество угаданных букв
    int flag = 0; //вспомогательный маркер
    int repeat = 0; //счетчик повтора букв
    
    //---------------подключение файла----------------------------------------
    //проверка успешного открытия файла
    if (!(words = fopen("words_en", "r"))){ 
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    //количество строк  
    while (fscanf(words, "%s", word) != EOF){
        number_of_words++;
    }
        
    //printf("Строк: %d\n", number_of_words);
    
    srand(time(NULL));
    word_choice = rand()%number_of_words; //выбор номера строки со словом
    printf("Выбрано слово номер: %d\n", word_choice);
        
    fseek(words, 0, SEEK_SET); //указатель на начало файла
    for (int i = 0; i < word_choice; i++){
        fscanf(words, "%s", word); //запись в массив выбранного слова
        //puts(word);
    }
    
    fclose(words);
    //---------------подключение файла----------------------------------------    
    
    word_size = strlen(word); 
            
    puts(word); 
    printf("%d\n", word_size); 
    
    char *entered_word = (char*)calloc(word_size, sizeof(char)); /*выделение памяти для массива для вводимых букв*/
    memset(entered_word, '_', word_size); //заполнение массивва для вводимых букв символами "_"
    
    puts(entered_word);
        
    while(word_size != 0 && error < 9 && stop < word_size){
        puts("Введите букву: ");        
        scanf("%c%*c", &letter);
        printf("\n");
        //printf("%c\n", letter);
        
        //проверка наличия такой буквы в загаданном слове
        for (int i = 0; i < word_size; i++){
            
            //если буква повторяется, засчитывается ошибка
            if (entered_word[i] == letter){
                error++;
                repeat++;
                puts("Такая буква уже есть!\n");
                break;
            }
            flag++; /*маркер: были в цикле и проверили, что введенная буква ни новая угаданная,
            ни старая угаданная и надо отметить, что такой буквы нет*/
            if (word[i] == letter){
                entered_word[i] = word[i];
                guessed++;                
                //printf("Flag: %d\n", flag);
                //printf("Угадано: %d\n", guessed);
                //printf("\n");      
            }        
        }
        
        //guessed == 0 && - было в if ниже
        
        //если буква не совпадает с элементом массива, счетчик неугаданных букв увеличивается
        //если вводимая буква не находится в слове, увеличивается счетчик ошибок
        if (guessed == 0 && flag != 0 && repeat == 0){
            error++;
            puts("Такой буквы нет!");
            printf("\n");
        } 
        
        stop += guessed; //считает количество угаданных букв
        //printf("Стоп: %d\n", stop);
        guessed = 0;
        repeat = 0;
        if (flag != 0)
            flag = 0;
        
        puts(entered_word);
        printf("\n");
                
        printf("Ошибок: %d\n", error);
        printf("\n");
        sketch(error);
        printf("\n");
        printf("________________\n");
    }
    
    printf("****************\n");
    printf("Ошибок всего: %d\n", error); 
    
    if (error < 9 && stop == word_size){
        puts("Победа!");
    }
    else
        puts("Поражение...");
      
    free(entered_word); 
       
    return 0;
}
