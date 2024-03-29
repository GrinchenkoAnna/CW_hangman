#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>

#include <ctest.h>
#include <hidden_word.h>

//russian
//test1: 0
CTEST(HIDDEN_WORD_reading_word_ru, empty){

    // Given 
    freopen("test/hidden_word/file_selection", "r", stdin);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(1, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test2: 1
CTEST(HIDDEN_WORD_reading_word_ru, success1){

    // Given 
    fseek(stdin, 1+1, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test3: 2
CTEST(HIDDEN_WORD_reading_word_ru, success2){

    // Given 
    fseek(stdin, 2+2, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test4: 3
CTEST(HIDDEN_WORD_reading_word_ru, success3){

    // Given 
    fseek(stdin, 3+3, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test5: 4
CTEST(HIDDEN_WORD_reading_word_ru, success4){

    // Given 
    fseek(stdin, 4+4, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test6: 5
CTEST(HIDDEN_WORD_reading_word_ru, success5){

    // Given 
    fseek(stdin, 5+5, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test7: 6
CTEST(HIDDEN_WORD_reading_word_ru, success6){

    // Given 
    fseek(stdin, 6+6, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test8: 7
CTEST(HIDDEN_WORD_reading_word_ru, success7){

    // Given 
    fseek(stdin, 7+7, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test9: 8
CTEST(HIDDEN_WORD_reading_word_ru, success8){

    // Given 
    fseek(stdin, 8+8, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test10: 9
CTEST(HIDDEN_WORD_reading_word_ru, success9){

    // Given 
    fseek(stdin, 9+9, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test11: 10
CTEST(HIDDEN_WORD_reading_word_ru, success10){

    // Given 
    fseek(stdin, 10+10, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test12: 11
CTEST(HIDDEN_WORD_reading_word_ru, success11){

    // Given 
    fseek(stdin, 12+11, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test13: 12
CTEST(HIDDEN_WORD_reading_word_ru, exit){

    // Given 
    fseek(stdin, 14+12, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(1, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test14: -10g
CTEST(HIDDEN_WORD_reading_word_ru, read_error1){

    // Given 
    fseek(stdin, 16+13, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(1, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test15: 25у(кир!)
CTEST(HIDDEN_WORD_reading_word_ru, read_error2){

    // Given 
    fseek(stdin, 20+15, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(1, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test16: 999y3
CTEST(HIDDEN_WORD_reading_word_ru, correction1){

    // Given 
    fseek(stdin, 23+17, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test17: jagY7
CTEST(HIDDEN_WORD_reading_word_ru, correction2){

    // Given 
    fseek(stdin, 28+20, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(1, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//english
//test1: 0
CTEST(HIDDEN_WORD_reading_word_en, empty){

    // Given 
    freopen("test/hidden_word/file_selection", "r", stdin);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(2, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test2: 1
CTEST(HIDDEN_WORD_reading_word_en, success1){

    // Given 
    fseek(stdin, 1+1, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test3: 2
CTEST(HIDDEN_WORD_reading_word_en, success2){

    // Given 
    fseek(stdin, 2+2, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test4: 3
CTEST(HIDDEN_WORD_reading_word_en, success3){

    // Given 
    fseek(stdin, 3+3, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test5: 4
CTEST(HIDDEN_WORD_reading_word_en, success4){

    // Given 
    fseek(stdin, 4+4, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test6: 5
CTEST(HIDDEN_WORD_reading_word_en, success5){

    // Given 
    fseek(stdin, 5+5, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test7: 6
CTEST(HIDDEN_WORD_reading_word_en, success6){

    // Given 
    fseek(stdin, 6+6, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test8: 7
CTEST(HIDDEN_WORD_reading_word_en, success7){

    // Given 
    fseek(stdin, 7+7, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test9: 8
CTEST(HIDDEN_WORD_reading_word_en, success8){

    // Given 
    fseek(stdin, 8+8, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test10: 9
CTEST(HIDDEN_WORD_reading_word_en, success9){

    // Given 
    fseek(stdin, 9+9, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test11: 10
CTEST(HIDDEN_WORD_reading_word_en, success10){

    // Given 
    fseek(stdin, 10+10, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test12: 11
CTEST(HIDDEN_WORD_reading_word_en, success11){

    // Given 
    fseek(stdin, 12+11, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test13: 12
CTEST(HIDDEN_WORD_reading_word_en, exit){

    // Given 
    fseek(stdin, 14+12, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(2, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test14: -10g
CTEST(HIDDEN_WORD_reading_word_en, read_error1){

    // Given 
    fseek(stdin, 16+13, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(2, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test15: 25у(кир!)
CTEST(HIDDEN_WORD_reading_word_en, read_error2){

    // Given 
    fseek(stdin, 20+15, SEEK_SET);
    wchar_t word[15] = {0};
    // When
    const int result = hidden_word(2, word);
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test16: 999y3
CTEST(HIDDEN_WORD_reading_word_en, correction1){

    // Given 
    fseek(stdin, 23+17, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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

//test17: jagY7
CTEST(HIDDEN_WORD_reading_word_en, correction2){

    // Given 
    fseek(stdin, 28+20, SEEK_SET);
    wchar_t word[15] = {0};
    hidden_word(2, word);
    
    unsigned int size = wcslen(word);
    unsigned int nonempty = 0;

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
