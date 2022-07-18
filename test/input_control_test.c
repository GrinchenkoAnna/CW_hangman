#include <stdio.h>
#include "../thirdparty/ctest.h"
#include "../src/input_control.h"

//
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

CTEST(one_symbol_suite, lat1_upper_case){

    // Given
    freopen("test/one_symbol_lat_upper_case", "r", stdin);
    const char s2 = input_control();
    // When
    const int result = (int)s2;
    // Then
    const int expected = 74;
    
    ASSERT_EQUAL(expected, result);
}

//
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

//
CTEST(one_symbol_suite, kir1_upper_case){

    // Given
    freopen("test/one_symbol_kir_upper_case", "r", stdin);
    const char s4 = input_control();
    // When
    const int result = (int)s4;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, space){

    // Given
    freopen("test/one_symbol_space", "r", stdin);
    const char s5 = input_control();
    // When
    const int result = (int)s5;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, tab){

    // Given
    freopen("test/one_symbol_tab", "r", stdin);
    const char s6 = input_control();
    // When
    const int result = (int)s6;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, enter){

    // Given
    freopen("test/one_symbol_enter", "r", stdin);
    const char s7 = input_control();
    // When
    const int result = (int)s7;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, number){

    // Given
    freopen("test/one_symbol_number", "r", stdin);
    const char s8 = input_control();
    // When
    const int result = (int)s8;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, tilde){

    // Given
    freopen("test/one_symbol_tilde", "r", stdin);
    const char s9 = input_control();
    // When
    const int result = (int)s9;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, exclamation_mark){

    // Given
    freopen("test/one_symbol_exclamation_mark", "r", stdin);
    const char s10 = input_control();
    // When
    const int result = (int)s10;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, at){

    // Given
    freopen("test/one_symbol_at", "r", stdin);
    const char s11 = input_control();
    // When
    const int result = (int)s11;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, hash){

    // Given
    freopen("test/one_symbol_hash", "r", stdin);
    const char s12 = input_control();
    // When
    const int result = (int)s12;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, dollar){

    // Given
    freopen("test/one_symbol_dollar", "r", stdin);
    const char s13 = input_control();
    // When
    const int result = (int)s13;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, percent){

    // Given
    freopen("test/one_symbol_percent", "r", stdin);
    const char s14 = input_control();
    // When
    const int result = (int)s14;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, caret){

    // Given
    freopen("test/one_symbol_caret", "r", stdin);
    const char s15 = input_control();
    // When
    const int result = (int)s15;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, ampersand){

    // Given
    freopen("test/one_symbol_ampersand", "r", stdin);
    const char s16 = input_control();
    // When
    const int result = (int)s16;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, asterisk){

    // Given
    freopen("test/one_symbol_asterisk", "r", stdin);
    const char s17 = input_control();
    // When
    const int result = (int)s17;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, left_parenthesis){

    // Given
    freopen("test/one_symbol_left_parenthesis", "r", stdin);
    const char s18 = input_control();
    // When
    const int result = (int)s18;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, right_parenthesis){

    // Given
    freopen("test/one_symbol_right_parenthesis", "r", stdin);
    const char s19 = input_control();
    // When
    const int result = (int)s19;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, underscore){

    // Given
    freopen("test/one_symbol_underscore", "r", stdin);
    const char s20 = input_control();
    // When
    const int result = (int)s20;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, plus){

    // Given
    freopen("test/one_symbol_plus", "r", stdin);
    const char s21 = input_control();
    // When
    const int result = (int)s21;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, acute){

    // Given
    freopen("test/one_symbol_acute", "r", stdin);
    const char s22 = input_control();
    // When
    const int result = (int)s22;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, dash){

    // Given
    freopen("test/one_symbol_dash", "r", stdin);
    const char s23 = input_control();
    // When
    const int result = (int)s23;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, equals){

    // Given
    freopen("test/one_symbol_equals", "r", stdin);
    const char s24 = input_control();
    // When
    const int result = (int)s24;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, left_curly_brace){

    // Given
    freopen("test/one_symbol_left_curly_brace", "r", stdin);
    const char s25 = input_control();
    // When
    const int result = (int)s25;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, right_curly_brace){

    // Given
    freopen("test/one_symbol_right_curly_brace", "r", stdin);
    const char s26 = input_control();
    // When
    const int result = (int)s26;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, vertical_bar){

    // Given
    freopen("test/one_symbol_vertical_bar", "r", stdin);
    const char s27 = input_control();
    // When
    const int result = (int)s27;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, left_square_bracket){

    // Given
    freopen("test/one_symbol_left_square_bracket", "r", stdin);
    const char s28 = input_control();
    // When
    const int result = (int)s28;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, right_square_bracket){

    // Given
    freopen("test/one_symbol_right_square_bracket", "r", stdin);
    const char s29 = input_control();
    // When
    const int result = (int)s29;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, backslash){

    // Given
    freopen("test/one_symbol_backslash", "r", stdin);
    const char s30 = input_control();
    // When
    const int result = (int)s30;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, forward_slash){

    // Given
    freopen("test/one_symbol_forward_slash", "r", stdin);
    const char s31 = input_control();
    // When
    const int result = (int)s31;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, colon){

    // Given
    freopen("test/one_symbol_colon", "r", stdin);
    const char s32 = input_control();
    // When
    const int result = (int)s32;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, quote){

    // Given
    freopen("test/one_symbol_quote", "r", stdin);
    const char s33 = input_control();
    // When
    const int result = (int)s33;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, semi_colon){

    // Given
    freopen("test/one_symbol_semi_colon", "r", stdin);
    const char s34 = input_control();
    // When
    const int result = (int)s34;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, apostrophe){

    // Given
    freopen("test/one_symbol_apostrophe", "r", stdin);
    const char s35 = input_control();
    // When
    const int result = (int)s35;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, less_than){

    // Given
    freopen("test/one_symbol_less_than", "r", stdin);
    const char s36 = input_control();
    // When
    const int result = (int)s36;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, greather_than){

    // Given
    freopen("test/one_symbol_greather_than", "r", stdin);
    const char s37 = input_control();
    // When
    const int result = (int)s37;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, question_mark){

    // Given
    freopen("test/one_symbol_question_mark", "r", stdin);
    const char s38 = input_control();
    // When
    const int result = (int)s38;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, comma){

    // Given
    freopen("test/one_symbol_comma", "r", stdin);
    const char s39 = input_control();
    // When
    const int result = (int)s39;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, dot){

    // Given
    freopen("test/one_symbol_dot", "r", stdin);
    const char s40 = input_control();
    // When
    const int result = (int)s40;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
