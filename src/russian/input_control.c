#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>    
    
wchar_t input_control(){
    setlocale(LC_ALL, "");
    
    wchar_t player_input[100] = {0}; //массив для вводимых игроком символов
    wchar_t abc[65] = {L'а', L'б', L'в', L'г', L'д', L'е', L'ж', L'з', L'и', L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю', L'я', L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ж', L'З', L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р', L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ', L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'}; //разрешенные для ввода символы 
    wchar_t symbol; //вводимая буква    
    
    unsigned int wrong_symbol = 0; //для ввода неверных символов    
    
    //ограничения на ввод количества символов
    /*while (fgetws(player_input, 99, stdin)){
    	wprintf(L"%ld\n", sizeof(player_input[0]));
    	wprintf(L"%ld\n", wcslen(player_input));
        if ((player_input[0] != '\0') && (player_input[wcslen(player_input) - 1] == '\n')){
            player_input[wcslen(player_input) - 1] = '\0';
        }*/
        
        fgetws(player_input, 99, stdin);
        symbol = player_input[0]; 
        /*wprintf(L"Размер символа: %ld\n", sizeof(player_input[0]));
    	wprintf(L"Длина ввода: %ld\n", wcslen(player_input));
        wprintf(L"Сопоставление: %lc %lc\n", player_input[0], symbol);*/
        
        //проверка: введенный символ совпадает хотя бы с одним из разрешенных
        for (int i = 0; i < wcslen(abc); i++){
            if (symbol != abc[i]){
                wrong_symbol++;                    
                }
            }
                  
        //если введен запрещенный символ, засчитывается ошибка
        if (wrong_symbol > 63){
            wprintf(L"Введен(ы) запрещенный(е) символ(ы)!\nОшибка! \n");            
            wrong_symbol = 1994;
            return '\0'; 
        }
            
        //если введено больше одного символа
        if (wcslen(player_input - 1) > 1 && wrong_symbol != 1994){
            wprintf(L"Вы ввели больше одной буквы. Будет засчитан первый введенный символ: %lc\n", symbol);
        }
                                     
        //wprintf(L"Введенная буква: %lc\n", symbol); break;
    //}
    
    return(symbol);
}
