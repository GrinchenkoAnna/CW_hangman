#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>  

#define RUSSIAN 1
#define ENGLISH 2
#define LANGUAGE ENGLISH
    
wchar_t input_control(){
    setlocale(LC_ALL, "");
    
    wchar_t player_input[10] = {0}; //массив для вводимых игроком символов
    wchar_t symbol; //вводимая буква 
    wchar_t ch = L'0';    
    
    unsigned int wrong_symbol = 0; //для ввода неверных символов               
            
    #if LANGUAGE == RUSSIAN
    //ограничения на ввод количества символов
    for (int i = 0; (i < 10) && ((ch = getwchar()) !=  WEOF) && (ch != L'\n'); i++){
        player_input[i] = ch;
    }    
        wchar_t abc_rus[65] = {L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я', L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ж', L'З', L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р', L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ', L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'}; //разрешенные для ввода символы
        
        symbol = player_input[0];
        if (wcslen(player_input) - 1 > 1){
            wprintf(L"Вы ввели больше одной буквы. Будет засчитан первый введенный символ:\n");            
        }              
        wprintf(L"---Введенная буква: %lc\n", symbol);  
        
        //проверка: введенный символ совпадает хотя бы с одним из разрешенных
        for (int i = 0; i < wcslen(abc_rus); i++){
            if (symbol != abc_rus[i]){
                wrong_symbol++;                              
                }
        }
        wprintf(L"---Не совпало символов: %ld\n", wrong_symbol);    
        
        //если введен запрещенный символ, засчитывается ошибка
        if (wrong_symbol > 63){
            wprintf(L"Введен(ы) запрещенный(е) символ(ы)!\nОшибка! \n");            
            //wrong_symbol = 1994;
            return '\0'; 
        } 
       
    #elif LANGUAGE == ENGLISH
    //ограничения на ввод количества символов
    for (int i = 0; (i < 10) && ((ch = getwchar()) !=  WEOF) && (ch != L'\n'); i++){
        player_input[i] = ch;
    }
    wchar_t abc_eng[53] = {L'a', L'b', L'c', L'd', L'e', L'f', L'g', L'h', L'i', L'j', L'k', L'l', L'm', L'n', L'o', L'p', L'q', L'r', L's', L't', L'u', L'v', L'w', L'x', L'y', L'z', L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J', L'K', L'L', L'M', L'N', L'O', L'P', L'Q', L'R', L'S', L'T', L'U', L'V', L'W', L'X', L'Y', L'Z'}; //разрешенные для ввода символы
    
    symbol = player_input[0]; 
    if (wcslen(player_input) - 1 > 1){
        wprintf(L"Вы ввели больше одной буквы. Будет засчитан первый введенный символ: %lc\n", symbol);
    }         
    wprintf(L"Введенная буква: %lc\n", symbol);  
        
    //проверка: введенный символ совпадает хотя бы с одним из разрешенных
    for (int i = 0; i < wcslen(abc_eng); i++){
        if (symbol != abc_eng[i]){
            wrong_symbol++;                    
        }
    }
        
    //если введен запрещенный символ, засчитывается ошибка           
    if (wrong_symbol > 51){
        wprintf(L"Введен(ы) запрещенный(е) символ(ы)!\nОшибка! \n");  
        return '\0'; 
    }
    #endif
    
    return(symbol);
}
