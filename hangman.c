#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char word[] = "hangman"; //загаданное слово
    int word_size = strlen(word); //размер загаданного слова
    char letter; //для вводимой буквы
    
    
    puts(word); 
    printf("%d\n", word_size);
    
    char *entered_word = (char*)calloc(word_size, sizeof(char));
    memset(entered_word, '_', word_size);
    
    puts(entered_word);
    
    puts("Введите букву: ");
    scanf("%c", &letter);
    //printf("%c\n", letter);
    
    //проверка наличия такой буквы в загаданном слове
    for (long int i = 0; i < word_size; i++){
        if (word[i] == letter){
            entered_word[i] = word[i];        
        }
    }
    puts(entered_word);
    
    
       
    return 0;
} 
