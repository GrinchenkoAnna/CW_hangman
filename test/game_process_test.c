#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../thirdparty/ctest.h"
#include "../src/game_process.h"
#include "../src/input_control.h"
#include "../src/sketch.h"


//test1
CTEST(blackcurrant, null_errors){

    // Given
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
            
    freopen("test/game_process/blackcurrant0", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern0", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant1", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern1", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant2", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern2", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant3", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern3", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant4", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern4", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant5", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern5", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant6", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern6", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant7", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern7", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant8", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern8", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
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
    int error = 0;
    char test_word_to_guess[12] = "blackcurrant", test_player_word[12] = "____________", ch1 = 0, ch2 = 0;
    printf("\n");
    
    freopen("test/game_process/blackcurrant9", "r", stdin); 
    game_process(12, test_player_word, test_word_to_guess);
       
    FILE* statfile = fopen("src/temp/statistics", "r"); 
    FILE* patternfile = fopen("test/game_process/pattern9", "r"); 
    
    ch1 = fgetc(statfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(statfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(statfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
