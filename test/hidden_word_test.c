#include <stdio.h>
#include <string.h>
#include "../thirdparty/ctest.h"
#include "../src/english/hidden_word.h"

//test1: 0
CTEST(reading_word_from_list, read_error1){

    // Given 
    freopen("test/hidden_word/file_selection", "r", stdin);   
    char word[15] = {0};
    // When
    const int result = hidden_word(word);
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//test2: -10
CTEST(reading_word_from_list, read_error2){

    // Given 
    fseek(stdin, 16+13, SEEK_SET);
    char word[15] = {0};
    // When
    const int result = hidden_word(word);
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//test3: 25
CTEST(reading_word_from_list, read_error3){

    // Given 
    fseek(stdin, 19+14, SEEK_SET);
    char word[15] = {0};
    // When
    const int result = hidden_word(word);
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//test4: 1 
CTEST(reading_word_from_list, read_and_write1){

    // Given 
    fseek(stdin, 1+1, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test5: 2
CTEST(reading_word_from_list, read_and_write2){

    // Given 
    fseek(stdin, 2+2, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test6: 3
CTEST(reading_word_from_list, read_and_write3){

    // Given 
    fseek(stdin, 3+3, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test7: 4
CTEST(reading_word_from_list, read_and_write4){

    // Given 
    fseek(stdin, 4+4, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test8: 5
CTEST(reading_word_from_list, read_and_write5){

    // Given 
    fseek(stdin, 5+5, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test9: 6
CTEST(reading_word_from_list, read_and_write6){

    // Given 
    fseek(stdin, 6+6, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test10: 7
CTEST(reading_word_from_list, read_and_write7){

    // Given 
    fseek(stdin, 7+7, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test11: 8
CTEST(reading_word_from_list, read_and_write8){

    // Given 
    fseek(stdin, 8+8, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test12: 9
CTEST(reading_word_from_list, read_and_write9){

    // Given 
    fseek(stdin, 9+9, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test13: 10
CTEST(reading_word_from_list, read_and_write10){

    // Given 
    fseek(stdin, 10+10, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test14: 11
CTEST(reading_word_from_list, read_and_write11){

    // Given 
    fseek(stdin, 12+11, SEEK_SET);
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
    for (int i = 0; i < size; i++){
        if (word[i] != 0){
            nonempty++;
        }
    }
    
    // When
    const int result = nonempty;
    // Then
    const int expected = 0;
    
    ASSERT_NOT_EQUAL(expected, result);
}

//test15: 12
CTEST(reading_word_from_list, exit){

    // Given 
    fseek(stdin, 14+12, SEEK_SET);
    char word[15] = {0};
    // When
    const int result = hidden_word(word);
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}
