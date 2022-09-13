#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include <limits.h>
#include "../thirdparty/ctest.h"
#include "../src/language.h"

//test1
CTEST(LANGUAGE_right_choice, 1){

    // Given 
    freopen("test/language/right_choice", "r", stdin); 
    const unsigned int choice = language();
    // When
    const int result = choice;
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//test2
CTEST(LANGUAGE_right_choice, 2){

    // Given 
    fseek(stdin, 1+1, SEEK_SET); 
    const unsigned int choice = language();
    // When
    const int result = choice;
    // Then
    const int expected = 2;
    
    ASSERT_EQUAL(expected, result);
}

//test3
CTEST(LANGUAGE_exit, 3){

    // Given 
    fseek(stdin, 2+2, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//ввод не тех цифр, что заданы в меню
//test4
CTEST(LANGUAGE_wrong_choice, 4Y2){

    // Given 
    freopen("test/language/wrong_choice", "r", stdin);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;
    
    ASSERT_EQUAL(expected, result);
}

//test5
CTEST(LANGUAGE_wrong_choice, 5circumflex){

    // Given 
    fseek(stdin, 3+3, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//ввод букв на латинице
//test6
CTEST(LANGUAGE_wrong_choice, kY2){

    // Given 
    fseek(stdin, 5+5, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;
    
    ASSERT_EQUAL(expected, result);
}

//test7
CTEST(LANGUAGE_wrong_choice, R9){

    // Given 
    fseek(stdin, 8+8, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//ввод букв на кириллице
//test8 - y - на кириллице
CTEST(LANGUAGE_wrong_choice, CHu){

    // Given 
    fseek(stdin, 10+10, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test9 - y - на латинице
CTEST(LANGUAGE_wrong_choice, shy1){

    // Given 
    fseek(stdin, 13+12, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//ввод знаков пунктуации - =, %, (
//test10
CTEST(LANGUAGE_wrong_choice, equaly2){

    // Given 
    fseek(stdin, 17+15, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;
    
    ASSERT_EQUAL(expected, result);
}

//test11
CTEST(LANGUAGE_wrong_choice, percentn){

    // Given 
    fseek(stdin, 20+18, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test12
CTEST(LANGUAGE_wrong_choice, parenthesisy1){

    // Given 
    fseek(stdin, 22+20, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//ввод пробела, табуляции и \n
//test13
CTEST(LANGUAGE_wrong_choice, spacey2){

    // Given 
    fseek(stdin, 25+23, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;
    
    ASSERT_EQUAL(expected, result);
}

//test14
CTEST(LANGUAGE_wrong_choice, tabY1){

    // Given 
    fseek(stdin, 28+26, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;
    
    ASSERT_EQUAL(expected, result);
}

//test14
CTEST(LANGUAGE_wrong_choice, enterspace){

    // Given 
    fseek(stdin, 31+29, SEEK_SET);     
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
