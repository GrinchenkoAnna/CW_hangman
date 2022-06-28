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
    char player_input[100] = {0}; //массив для вводимых игроком символов. Может, сделать больше?
    char letter; //вводимая буква 
    char abc[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //разрешенные для ввода символы 
    int error = 0; //счетчик ошибок
    int guessed = 0; //счетчик угаданных букв
    //int different = 0; //счетчик неугаданных букв
    int stop = 0; //для остановки, считает количество угаданных букв
    int flag = 0; //вспомогательный маркер
    int repeat = 0; //счетчик повтора букв
    int empty_input = 0; //для ввода символа \n вместо буквы
    int wrong_symbol = 0; //для ввода неверных символов
    
    
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
    
    //процесс игры        
    while(word_size != 0 && error < 9 && stop < word_size){
        puts("Введите букву. Разрешены символы: "); 
        puts(abc);
        printf("\n");
                
        //ограничения на ввод количества символов
        while (fgets(player_input, 99, stdin)){
            if ((player_input[0] != '\0') && (player_input[strlen(player_input) -1] == '\n')){
                player_input[strlen(player_input) - 1] = '\0';
            }
            //printf("Игрок ввел: %s\n", player_input);
            //printf("Длина ввода: %ld\n", strlen(player_input));
            
            if (strlen(player_input) == 0){
                puts("Необходимо ввести букву!");
                error++;
                empty_input++;
            }
            
            letter = player_input[0]; 
            
            //проверка: введенный символ совпадает хотя бы с одним из разрешенных
            for (int i = 0; i < strlen(abc); i++){
                if (letter != abc[i]){
                    wrong_symbol++;                    
                    }
                }
            //printf("Не совпадают с алфавитом %d символа(ов)\n", wrong_symbol);
            
            //если введен запрещенный символ, засчитывается ошибка
            if (wrong_symbol > 50 && empty_input == 0){
                puts("Введен(ы) запрещенный(е) символ(ы)!");
                wrong_symbol = 1994;
                error++;
            }
            //printf("Размер буквы: %ld\n", sizeof(letter));
            //printf("Буква: %c\n", letter);
            
            //если введено больше одного символа
            if (strlen(player_input) > 1 && wrong_symbol != 1994){
                puts("Вы ввели больше одной буквы. Будет засчитан первый введенный символ");
            }
                                     
            printf("\n"); break;
            //printf("Первая буква ввода: %c\n", letter); break;
            //printf("\n");
        }   
        
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
            
            //если такая буква есть в загаданном слове, она отображается в массиве для вводимых букв
            if (word[i] == letter || word[i] == letter + 32){
                entered_word[i] = word[i];
                guessed++;                
                //printf("Flag: %d\n", flag);
                //printf("Угадано: %d\n", guessed);
                //printf("\n");      
            }        
        }
        
                
        //если буква не совпадает с элементом массива, счетчик неугаданных букв увеличивается
        //если вводимая буква не находится в слове, увеличивается счетчик ошибок
        if (guessed == 0 && flag != 0 && repeat == 0 && empty_input == 0 && wrong_symbol < 52){
            error++;
            puts("Такой буквы нет!");
            printf("\n");
        } 
        
        stop += guessed; //считает количество угаданных букв
        //printf("Стоп: %d\n", stop);
        guessed = 0;
        repeat = 0;
        if (empty_input != 0)
            empty_input = 0;
        if (flag != 0)
            flag = 0;
        wrong_symbol = 0;
        
        puts(entered_word);
        printf("\n");
                
        printf("Ошибок: %d\n", error);
        printf("\n");
        sketch(error);
        printf("\n");
        printf("________________\n");        
    }
    
    printf("****************\n\n");
    printf("Ошибок всего: %d\n", error); 
    
    if (error < 9 && stop == word_size){
        puts("Победа!");
    }
    else
        puts("Поражение...");
      
    free(entered_word); 
       
    return 0;
}
