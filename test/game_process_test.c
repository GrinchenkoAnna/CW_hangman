#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../thirdparty/ctest.h"
#include "../src/game_process.h"
#include "../src/input_control.h"
#include "../src/sketch.h"

//test1
CTEST(blackcurrant, null_errors){

    // Given
    int error = 0;
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant0", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);   
       
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant0", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

/*//test2
CTEST(blackcurrant, one_error){

    // Given
    int error = 0;
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant1", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant1", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant2", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant2", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant3", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant3", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant4", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant4", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant5", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant5", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant6", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant6", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant7", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant7", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant8", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant8", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
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
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant9", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 0, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_blackcurrant9", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test11
CTEST(blackcurrant, game_exit){

    // Given
    int error = 0;
    char ch1, ch2;
    char test_word_to_guess[12] = "blackcurrant";
    char test_player_word[12] = "____________";
    
    FILE* inputfile = freopen("test/game_process/game_process_blackcurrant0", "r", stdin); 
    int record = open("test/game_process/game_process_record", O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
    
    int stdout_fileno = dup(1);    
    dup2(record, 1);
    close(record);
        
    game_process(12, 1, test_player_word, test_word_to_guess);
    
    fclose(inputfile);    
    dup2(stdout_fileno, 1); 
    close(stdout_fileno);
    
    FILE* recordfile = fopen("test/game_process/game_process_record", "r"); 
    FILE* patternfile = fopen("test/game_process/game_process_pattern_exit", "r"); 
 
    while (!feof(recordfile) && !feof(patternfile)){
        ch1 = fgetc(recordfile);
        ch2 = fgetc(patternfile);
        
        if (ch1 != ch2){
            error++;
        }   
    }
       
    fclose(recordfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}*/
