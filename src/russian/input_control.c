#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>    
    
wchar_t input_control(){
    setlocale(LC_CTYPE, "");
    
    wchar_t player_input[100] = {0}; //массив для вводимых игроком символов
    wchar_t abc[33] = {L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я'}; //разрешенные для ввода символы 
    wchar_t symbol; //вводимая буква    
    
    unsigned int wrong_symbol = 0; //для ввода неверных символов    
    
    //ограничения на ввод количества символов
    while (fgetws(player_input, 99, stdin)){
        if ((player_input[0] != '\0') && (player_input[wcslen(player_input) - 1] == '\n')){
            player_input[wcslen(player_input) - 1] = '\0';
        }
        
        symbol = player_input[0]; 
                
        //проверка: введенный символ совпадает хотя бы с одним из разрешенных
        for (int i = 0; i < wcslen(abc); i++){
            if (symbol != abc[i]){
                wrong_symbol++;                    
                }
            }
                  
        //если введен запрещенный символ, засчитывается ошибка
        if (wrong_symbol > 63){
            wprintf(L"Введен(ы) запрещенный(е) символ(ы)!\n");
            wprintf(L"Ошибка!\n");
            wrong_symbol = 1994;
            return '\0'; 
        }
            
        //если введено больше одного символа
        if (wcslen(player_input) > 1 && wrong_symbol != 1994){
            wprintf(L"Вы ввели больше одной буквы. Будет засчитан первый введенный символ: %lc\n", symbol);
        }
                                     
        wprintf(L"Введенная буква: %lc\n", symbol); break;
    }
    
    return(symbol);
}
