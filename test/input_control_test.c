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

//
CTEST(one_symbol_suite, rus1){

    // Given
    freopen("test/one_symbol_kir", "r", stdin);
    const char s2 = input_control();
    // When
    const int result = (int)s2;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, space){

    // Given
    freopen("test/one_symbol_space", "r", stdin);
    const char s3 = input_control();
    // When
    const int result = (int)s3;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, tab){

    // Given
    freopen("test/one_symbol_tab", "r", stdin);
    const char s4 = input_control();
    // When
    const int result = (int)s4;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, enter){

    // Given
    freopen("test/one_symbol_enter", "r", stdin);
    const char s5 = input_control();
    // When
    const int result = (int)s5;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//
CTEST(one_symbol_suite, number){

    // Given
    freopen("test/one_symbol_number", "r", stdin);
    const char s6 = input_control();
    // When
    const int result = (int)s6;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
