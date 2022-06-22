#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    char word[] = "hangman"; //загаданное слово
    int word_size = strlen(word); //размер загаданного слова
    char letter; //вводимая буква
    int error = 0; //счетчик ошибок
    int guessed = 0; //счетчик угаданных букв
    //int different = 0; //счетчик неугаданных букв
    int stop = 0; //для остановки
    int flag = 0;
    int repeat = 0; //счетчик повтора букв
    
    
    //puts(word); 
    //printf("%d\n", word_size);
    
    char *entered_word = (char*)calloc(word_size, sizeof(char));
    memset(entered_word, '_', word_size);
    
    puts(entered_word);
        
    while(word_size != 0 && error < 9 && stop < word_size){
        puts("Введите букву: ");        
        scanf("%c%*c", &letter);
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
            flag++;
            if (word[i] == letter){
                entered_word[i] = word[i];
                guessed++;                
                //printf("Flag: %d\n", flag);
                //printf("Угадано: %d\n", guessed);
                //printf("\n");      
            }        
        }
        
        //если буква не совпадает с элементом массива, счетчик неугаданных букв увеличивается
        //если вводимая буква не находится в слове, увеличивается счетчик ошибок
        if (guessed == 0 && flag != 0 && repeat == 0){
            error++;
            puts("Такой буквы нет!");
            printf("\n");
        } 
        
        stop += guessed;
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
