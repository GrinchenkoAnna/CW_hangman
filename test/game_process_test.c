#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
#include "../thirdparty/ctest.h"
#include "../src/game_process.h"
#include "../src/input_control.h"
#include "../src/sketch.h"


//test1
CTEST(blackcurrant, null_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
            
    freopen("test/game_process/blackcurrant0", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern0", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test2
CTEST(blackcurrant, one_error){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant1", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern1", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test3
CTEST(blackcurrant, two_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant2", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern2", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test4
CTEST(blackcurrant, three_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant3", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern3", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test5
CTEST(blackcurrant, four_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant4", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern4", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test6
CTEST(blackcurrant, five_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant5", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern5", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test7
CTEST(blackcurrant, six_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant6", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern6", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test8
CTEST(blackcurrant, seven_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant7", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern7", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test9
CTEST(blackcurrant, eight_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant8", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern8", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(blackcurrant, nine_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant", test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");
    
    freopen("test/game_process/blackcurrant9", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern9", "r"); 
    
    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
