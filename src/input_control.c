#include <stdio.h>
#include <string.h>    
    
char input_control(){
    
    char player_input[100] = {0}; //массив для вводимых игроком символов
    char abc[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //разрешенные для ввода символы 
    char symbol; //вводимая буква    
    
    unsigned int wrong_symbol = 0; //для ввода неверных символов    
    
    //ограничения на ввод количества символов
    while (fgets(player_input, 99, stdin)){
        if ((player_input[0] != '\0') && (player_input[strlen(player_input) -1] == '\n')){
            player_input[strlen(player_input) - 1] = '\0';
        }
        
        symbol = player_input[0]; 
                
        //проверка: введенный символ совпадает хотя бы с одним из разрешенных
        for (int i = 0; i < strlen(abc); i++){
            if (symbol != abc[i]){
                wrong_symbol++;                    
                }
            }
                  
        //если введен запрещенный символ, засчитывается ошибка
        if (wrong_symbol > 51){
            puts("Введен(ы) запрещенный(е) символ(ы)!");
            puts("Ошибка!");
            wrong_symbol = 1994;
            return '\0'; 
        }
            
        //если введено больше одного символа
        if (strlen(player_input) > 1 && wrong_symbol != 1994){
            printf("Вы ввели больше одной буквы. Будет засчитан первый введенный символ: %c\n", symbol);
        }
                                     
        printf("Введенная буква: %c\n", symbol); break;
    }
    
    return(symbol);
}
