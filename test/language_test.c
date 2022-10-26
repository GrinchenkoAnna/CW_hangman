#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include <limits.h>

#include <ctest.h>
#include <language.h>

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

//test4
CTEST(LANGUAGE_right_choice, 123){

    // Given 
    fseek(stdin, 3+3, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test5
CTEST(LANGUAGE_right_choice, 2mistakes){

    // Given 
    fseek(stdin, 6+4, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;

    ASSERT_EQUAL(expected, result);
}

//test6
CTEST(LANGUAGE_exit, 3_punkt_symbols){

    // Given 
    fseek(stdin, 15+5, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}

//ввод не тех цифр, что заданы в меню
//test7
CTEST(LANGUAGE_wrong_choice, 8y1){

    // Given 
    freopen("test/language/wrong_choice", "r", stdin);  
    fseek(stdin, 0, SEEK_SET);
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test8
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
//test9
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

//test10
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
//test11 - y - на кириллице
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

//test12 - y - на латинице
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
//test13
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

//test14
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

//test15
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
//test16
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

//test17
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

//test18
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

//ввод несколько символов
//test19
CTEST(LANGUAGE_wrong_choice, several_numbers){

    // Given 
    fseek(stdin, 33+31, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test20
CTEST(LANGUAGE_wrong_choice, several_kir){

    // Given 
    fseek(stdin, 33+31, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 1;

    ASSERT_EQUAL(expected, result);
}

//test21
CTEST(LANGUAGE_wrong_choice, several_lat){

    // Given 
    fseek(stdin, 47+33, SEEK_SET);  
    const unsigned int choice = language(); 
    // When
    const int result = choice;
    // Then
    const int expected = 2;

    ASSERT_EQUAL(expected, result);
}
