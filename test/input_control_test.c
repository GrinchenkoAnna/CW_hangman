#include <stdio.h>
#include <wchar.h>
#include "../thirdparty/ctest.h"
#include "../src/input_control.h"

//Ввод на латинице и Кириллице: строчная и прописная буквы
CTEST(one_symbol_suite, lat1){

    // Given
    freopen("test/one_symbol_lat", "r", stdin);   
    const char s1 = input_control();
    // When
    const int result = (int)s1;
    // Then
    const int expected = 119;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, lat2){

    // Given
    fseek(stdin, sizeof(char), SEEK_SET);
    const char s2 = input_control();
    // When
    const int result = (int)s2;
    // Then
    const int expected = 74;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, kir1){

    // Given
    freopen("test/one_symbol_kir", "r", stdin);    
    const char s3 = input_control();
    // When
    const int result = (int)s3;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, kir2){

    // Given
    fseek(stdin, sizeof(wchar_t), SEEK_SET);
    const char s4 = input_control();
    // When
    const int result = (int)s4;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//Ввод символов: пробел, табуляция, перенос на новую строку
CTEST(one_symbol_suite, space){

    // Given
    freopen("test/one_symbol_control_symbols", "r", stdin);
    const char s5 = input_control();
    // When
    const int result = (int)s5;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, tab){

    // Given
    fseek(stdin, sizeof(char), SEEK_SET);
    const char s6 = input_control();
    // When
    const int result = (int)s6;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, enter){

    // Given
    fseek(stdin, 2*sizeof(char), SEEK_SET);
    const char s7 = input_control();
    // When
    const int result = (int)s7;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//Ввод цифры и символов ~!@#$%^&*()_+`-={}|[]\/:";'<>?,.
CTEST(one_symbol_suite, number){

    // Given
    freopen("test/one_symbol_number_and_punctuation_marks", "r", stdin);
    const char s8 = input_control();
    // When
    const int result = (int)s8;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, tilde){

    // Given
    fseek(stdin, sizeof(char), SEEK_SET);
    const char s9 = input_control();
    // When
    const int result = (int)s9;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, exclamation_mark){

    // Given
    fseek(stdin, 2*sizeof(char), SEEK_SET);
    const char s10 = input_control();
    // When
    const int result = (int)s10;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, at){

    // Given
    fseek(stdin, 3*sizeof(char), SEEK_SET);
    const char s11 = input_control();
    // When
    const int result = (int)s11;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, hash){

    // Given
    fseek(stdin, 4*sizeof(char), SEEK_SET);
    const char s12 = input_control();
    // When
    const int result = (int)s12;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, dollar){

    // Given
    fseek(stdin, 5*sizeof(char), SEEK_SET);
    const char s13 = input_control();
    // When
    const int result = (int)s13;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, percent){

    // Given
    fseek(stdin, 6*sizeof(char), SEEK_SET);
    const char s14 = input_control();
    // When
    const int result = (int)s14;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, caret){

    // Given
    fseek(stdin, 7*sizeof(char), SEEK_SET);
    const char s15 = input_control();
    // When
    const int result = (int)s15;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, ampersand){

    // Given
    fseek(stdin, 8*sizeof(char), SEEK_SET);
    const char s16 = input_control();
    // When
    const int result = (int)s16;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, asterisk){

    // Given
    fseek(stdin, 9*sizeof(char), SEEK_SET);
    const char s17 = input_control();
    // When
    const int result = (int)s17;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, left_parenthesis){

    // Given
    fseek(stdin, 10*sizeof(char), SEEK_SET);
    const char s18 = input_control();
    // When
    const int result = (int)s18;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, right_parenthesis){

    // Given
    fseek(stdin, 11*sizeof(char), SEEK_SET);
    const char s19 = input_control();
    // When
    const int result = (int)s19;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, underscore){

    // Given
    fseek(stdin, 12*sizeof(char), SEEK_SET);
    const char s20 = input_control();
    // When
    const int result = (int)s20;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, plus){

    // Given
    fseek(stdin, 13*sizeof(char), SEEK_SET);
    const char s21 = input_control();
    // When
    const int result = (int)s21;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, acute){

    // Given
    fseek(stdin, 14*sizeof(char), SEEK_SET);
    const char s22 = input_control();
    // When
    const int result = (int)s22;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, dash){

    // Given
    fseek(stdin, 15*sizeof(char), SEEK_SET);
    const char s23 = input_control();
    // When
    const int result = (int)s23;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, equals){

    // Given
    fseek(stdin, 16*sizeof(char), SEEK_SET);
    const char s24 = input_control();
    // When
    const int result = (int)s24;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, left_curly_brace){

    // Given
    fseek(stdin, 17*sizeof(char), SEEK_SET);
    const char s25 = input_control();
    // When
    const int result = (int)s25;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, right_curly_brace){

    // Given
    fseek(stdin, 18*sizeof(char), SEEK_SET);
    const char s26 = input_control();
    // When
    const int result = (int)s26;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, vertical_bar){

    // Given
    fseek(stdin, 19*sizeof(char), SEEK_SET);
    const char s27 = input_control();
    // When
    const int result = (int)s27;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, left_square_bracket){

    // Given
    fseek(stdin, 20*sizeof(char), SEEK_SET);
    const char s28 = input_control();
    // When
    const int result = (int)s28;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, right_square_bracket){

    // Given
    fseek(stdin, 21*sizeof(char), SEEK_SET);
    const char s29 = input_control();
    // When
    const int result = (int)s29;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, backslash){

    // Given
    fseek(stdin, 22*sizeof(char), SEEK_SET);
    const char s30 = input_control();
    // When
    const int result = (int)s30;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, forward_slash){

    // Given
    fseek(stdin, 23*sizeof(char), SEEK_SET);
    const char s31 = input_control();
    // When
    const int result = (int)s31;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, colon){

    // Given
    fseek(stdin, 24*sizeof(char), SEEK_SET);
    const char s32 = input_control();
    // When
    const int result = (int)s32;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, quote){

    // Given
    fseek(stdin, 25*sizeof(char), SEEK_SET);
    const char s33 = input_control();
    // When
    const int result = (int)s33;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, semi_colon){

    // Given
    fseek(stdin, 26*sizeof(char), SEEK_SET);
    const char s34 = input_control();
    // When
    const int result = (int)s34;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, apostrophe){

    // Given
    fseek(stdin, 27*sizeof(char), SEEK_SET);
    const char s35 = input_control();
    // When
    const int result = (int)s35;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, less_than){

    // Given
    fseek(stdin, 28*sizeof(char), SEEK_SET);
    const char s36 = input_control();
    // When
    const int result = (int)s36;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, greather_than){

    // Given
    fseek(stdin, 29*sizeof(char), SEEK_SET);
    const char s37 = input_control();
    // When
    const int result = (int)s37;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, question_mark){

    // Given
    fseek(stdin, 30*sizeof(char), SEEK_SET);
    const char s38 = input_control();
    // When
    const int result = (int)s38;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, comma){

    // Given
    fseek(stdin, 31*sizeof(char), SEEK_SET);
    const char s39 = input_control();
    // When
    const int result = (int)s39;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

CTEST(one_symbol_suite, dot){

    // Given
    fseek(stdin, 32*sizeof(char), SEEK_SET);
    const char s40 = input_control();
    // When
    const int result = (int)s40;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
