#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include "../thirdparty/ctest.h"
#include "../src/input_control.h"

/*Ввод на латинице и Кириллице: строчная и прописная буквы, по одному символу*/
//test1
CTEST(one_symbol_suite, lat1){

    // Given
    freopen("test/input_control/one_symbol_lat", "r", stdin);   
    const wchar_t s1 = input_control(2);
    // When
    const int result = (int)s1;
    // Then
    const int expected = 119;
    
    ASSERT_EQUAL(expected, result);
}

//test2
CTEST(one_symbol_suite, lat2){

    // Given
    fseek(stdin, 1+1, SEEK_SET);
    const wchar_t s2 = input_control(2);
    // When
    const int result = (int)s2;
    // Then
    const int expected = 74;
    
    ASSERT_EQUAL(expected, result);
}

//test3
CTEST(one_symbol_suite, kir1){

    // Given
    freopen("test/input_control/one_symbol_kir", "r", stdin);    
    const wchar_t s3 = input_control(2);
    // When
    const int result = (int)s3;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
//test4

CTEST(one_symbol_suite, kir2){

    // Given
    fseek(stdin, 2+1, SEEK_SET);
    const wchar_t s4 = input_control(2);
    // When
    const int result = (int)s4;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

/*Ввод символов: пробел, табуляция, перенос на новую строку по одному*/
//test5
CTEST(one_symbol_suite, space){

    // Given
    freopen("test/input_control/one_symbol_control_symbols", "r", stdin);
    const wchar_t s5 = input_control(2);
    // When
    const int result = (int)s5;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test6
CTEST(one_symbol_suite, tab){

    // Given
    fseek(stdin, sizeof(wchar_t)+1, SEEK_SET);
    const wchar_t s6 = input_control(2);
    // When
    const int result = (int)s6;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test7
CTEST(one_symbol_suite, enter){

    // Given
    fseek(stdin, 2+2, SEEK_SET);
    const wchar_t s7 = input_control(2);
    // When
    const int result = (int)s7;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

/*Ввод цифры 1 и символов ~!@#$%^&*()_+`-={}|[]\/:";'<>?,.; по одному*/
//test8
CTEST(one_symbol_suite, number){

    // Given
    freopen("test/input_control/one_symbol_number_and_punctuation_marks", "r", stdin);
    const wchar_t s8 = input_control(2);
    // When
    const int result = (int)s8;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test9
CTEST(one_symbol_suite, tilde){

    // Given
    fseek(stdin, sizeof(wchar_t)+1, SEEK_SET);
    const wchar_t s9 = input_control(2);
    // When
    const int result = (int)s9;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(one_symbol_suite, exclamation_mark){

    // Given
    fseek(stdin, 2+2, SEEK_SET);
    const wchar_t s10 = input_control(2);
    // When
    const int result = (int)s10;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test11
CTEST(one_symbol_suite, at){

    // Given
    fseek(stdin, 3+3, SEEK_SET);
    const wchar_t s11 = input_control(2);
    // When
    const int result = (int)s11;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test12
CTEST(one_symbol_suite, hash){

    // Given
    fseek(stdin, 4+4, SEEK_SET);
    const wchar_t s12 = input_control(2);
    // When
    const int result = (int)s12;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test13
CTEST(one_symbol_suite, dollar){

    // Given
    fseek(stdin, 5+5, SEEK_SET);
    const wchar_t s13 = input_control(2);
    // When
    const int result = (int)s13;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test14
CTEST(one_symbol_suite, percent){

    // Given
    fseek(stdin, 6+6, SEEK_SET);
    const wchar_t s14 = input_control(2);
    // When
    const int result = (int)s14;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test15
CTEST(one_symbol_suite, caret){

    // Given
    fseek(stdin, 7+7, SEEK_SET);
    const wchar_t s15 = input_control(2);
    // When
    const int result = (int)s15;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test16
CTEST(one_symbol_suite, ampersand){

    // Given
    fseek(stdin, 8+8, SEEK_SET);
    const wchar_t s16 = input_control(2);
    // When
    const int result = (int)s16;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test17
CTEST(one_symbol_suite, asterisk){

    // Given
    fseek(stdin, 9+9, SEEK_SET);
    const wchar_t s17 = input_control(2);
    // When
    const int result = (int)s17;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test18
CTEST(one_symbol_suite, left_parenthesis){

    // Given
    fseek(stdin, 10+10, SEEK_SET);
    const wchar_t s18 = input_control(2);
    // When
    const int result = (int)s18;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test19
CTEST(one_symbol_suite, right_parenthesis){

    // Given
    fseek(stdin, 11+11, SEEK_SET);
    const wchar_t s19 = input_control(2);
    // When
    const int result = (int)s19;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test20
CTEST(one_symbol_suite, underscore){

    // Given
    fseek(stdin, 12+12, SEEK_SET);
    const wchar_t s20 = input_control(2);
    // When
    const int result = (int)s20;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test21
CTEST(one_symbol_suite, plus){

    // Given
    fseek(stdin, 13+13, SEEK_SET);
    const wchar_t s21 = input_control(2);
    // When
    const int result = (int)s21;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}


//test22
CTEST(one_symbol_suite, acute){

    // Given
    fseek(stdin, 14+14, SEEK_SET);
    const wchar_t s22 = input_control(2);
    // When
    const int result = (int)s22;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test23
CTEST(one_symbol_suite, dash){

    // Given
    fseek(stdin, 15+15, SEEK_SET);
    const wchar_t s23 = input_control(2);
    // When
    const int result = (int)s23;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test24
CTEST(one_symbol_suite, equals){

    // Given
    fseek(stdin, 16+16, SEEK_SET);
    const wchar_t s24 = input_control(2);
    // When
    const int result = (int)s24;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test25
CTEST(one_symbol_suite, left_curly_brace){

    // Given
    fseek(stdin, 17+17, SEEK_SET);
    const wchar_t s25 = input_control(2);
    // When
    const int result = (int)s25;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test26
CTEST(one_symbol_suite, right_curly_brace){

    // Given
    fseek(stdin, 18+18, SEEK_SET);
    const wchar_t s26 = input_control(2);
    // When
    const int result = (int)s26;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test27
CTEST(one_symbol_suite, vertical_bar){

    // Given
    fseek(stdin, 19+19, SEEK_SET);
    const wchar_t s27 = input_control(2);
    // When
    const int result = (int)s27;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test28
CTEST(one_symbol_suite, left_square_bracket){

    // Given
    fseek(stdin, 20+20, SEEK_SET);
    const wchar_t s28 = input_control(2);
    // When
    const int result = (int)s28;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test29
CTEST(one_symbol_suite, right_square_bracket){

    // Given
    fseek(stdin, 21+21, SEEK_SET);
    const wchar_t s29 = input_control(2);
    // When
    const int result = (int)s29;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test30
CTEST(one_symbol_suite, backslash){

    // Given
    fseek(stdin, 22+22, SEEK_SET);
    const wchar_t s30 = input_control(2);
    // When
    const int result = (int)s30;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test31
CTEST(one_symbol_suite, forward_slash){

    // Given
    fseek(stdin, 23+23, SEEK_SET);
    const wchar_t s31 = input_control(2);
    // When
    const int result = (int)s31;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test32
CTEST(one_symbol_suite, colon){

    // Given
    fseek(stdin, 24+24, SEEK_SET);
    const wchar_t s32 = input_control(2);
    // When
    const int result = (int)s32;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test33
CTEST(one_symbol_suite, quote){

    // Given
    fseek(stdin, 25+25, SEEK_SET);
    const wchar_t s33 = input_control(2);
    // When
    const int result = (int)s33;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test34
CTEST(one_symbol_suite, semi_colon){

    // Given
    fseek(stdin, 26+26, SEEK_SET);
    const wchar_t s34 = input_control(2);
    // When
    const int result = (int)s34;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test35
CTEST(one_symbol_suite, apostrophe){

    // Given
    fseek(stdin, 27+27, SEEK_SET);
    const wchar_t s35 = input_control(2);
    // When
    const int result = (int)s35;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test36
CTEST(one_symbol_suite, less_than){

    // Given
    fseek(stdin, 28+28, SEEK_SET);
    const wchar_t s36 = input_control(2);
    // When
    const int result = (int)s36;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test37
CTEST(one_symbol_suite, greather_than){

    // Given
    fseek(stdin, 29+29, SEEK_SET);
    const wchar_t s37 = input_control(2);
    // When
    const int result = (int)s37;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test38
CTEST(one_symbol_suite, question_mark){

    // Given
    fseek(stdin, 30+30, SEEK_SET);
    const wchar_t s38 = input_control(2);
    // When
    const int result = (int)s38;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test39
CTEST(one_symbol_suite, comma){

    // Given
    fseek(stdin, 31+31, SEEK_SET);
    const wchar_t s39 = input_control(2);
    // When
    const int result = (int)s39;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test40
CTEST(one_symbol_suite, dot){

    // Given
    fseek(stdin, 32+32, SEEK_SET);
    const wchar_t s40 = input_control(2);
    // When
    const int result = (int)s40;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test41

/*Ввод строки*/
//test41
CTEST(several_symbols_suite, lat_kir1){

    // Given
    freopen("test/input_control/several_symbols", "r", stdin); 
    const wchar_t str1 = input_control(2);
    // When
    const int result = (int)str1;
    // Then
    const int expected = 113;
    
    ASSERT_EQUAL(expected, result);
}

//test42
CTEST(several_symbols_suite, lat_kir2){

    // Given
    fseek(stdin, 3+6+1, SEEK_SET);
    const wchar_t str2 = input_control(2);
    // When
    const int result = (int)str2;
    // Then
    const int expected = 65;
    
    ASSERT_EQUAL(expected, result);
}

//test43
CTEST(several_symbols_suite, lat_kir3){

    // Given
    fseek(stdin, 10+4+6+1, SEEK_SET);
    const wchar_t str3 = input_control(2);
    // When
    const int result = (int)str3;
    // Then
    const int expected = 114;
    
    ASSERT_EQUAL(expected, result);
}

//test44
CTEST(several_symbols_suite, lat_kir4){

    // Given
    fseek(stdin, 21+1+10+1, SEEK_SET);
    const wchar_t str4 = input_control(2);
    // When
    const int result = (int)str4;
    // Then
    const int expected = 76;
    
    ASSERT_EQUAL(expected, result);
}

//test45
CTEST(several_symbols_suite, lat_kir5){

    // Given
    fseek(stdin, 33+1+12+1, SEEK_SET);
    const wchar_t str5 = input_control(2);
    // When
    const int result = (int)str5;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test46
CTEST(several_symbols_suite, lat_kir6){

    // Given
    fseek(stdin, 47+2+5+1, SEEK_SET);
    const wchar_t str6 = input_control(2);
    // When
    const int result = (int)str6;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test47
CTEST(several_symbols_suite, num_lat){

    // Given
    fseek(stdin, 55+2+2+1, SEEK_SET);
    const wchar_t str7 = input_control(2);
    // When
    const int result = (int)str7;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test48
CTEST(several_symbols_suite, lat_num){

    // Given
    fseek(stdin, 60+8+1, SEEK_SET);
    const wchar_t str8 = input_control(2);
    // When
    const int result = (int)str8;
    // Then
    const int expected = 97;
    
    ASSERT_EQUAL(expected, result);
}

//test49
CTEST(several_symbols_suite, num_kir){

    // Given
    fseek(stdin, 69+6+1, SEEK_SET);
    const wchar_t str9 = input_control(2);
    // When
    const int result = (int)str9;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test50
CTEST(several_symbols_suite, kir_num){

    // Given
    fseek(stdin, 76+3+4+1, SEEK_SET);
    const wchar_t str10 = input_control(2);
    // When
    const int result = (int)str10;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test51
CTEST(several_symbols_suite, punct_marks_kir){

    // Given
    fseek(stdin, 84+3+6+1, SEEK_SET);
    const wchar_t str11 = input_control(2);
    // When
    const int result = (int)str11;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test52
CTEST(several_symbols_suite, punct_marks_lat){

    // Given
    fseek(stdin, 94+4+8+1, SEEK_SET);
    const wchar_t str12 = input_control(2);
    // When
    const int result = (int)str12;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test53
CTEST(several_symbols_suite, kir_punct_marks){

    // Given
    fseek(stdin, 107+8+1, SEEK_SET);
    const wchar_t str13 = input_control(2);
    // When
    const int result = (int)str13;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test54
CTEST(several_symbols_suite, lat_punct_marks){

    // Given
    fseek(stdin, 116+4+8+1, SEEK_SET);
    const wchar_t str14 = input_control(2);
    // When
    const int result = (int)str14;
    // Then
    const int expected = 97;
    
    ASSERT_EQUAL(expected, result);
}

//test55
CTEST(several_symbols_suite, space_lat){

    // Given
    fseek(stdin, 129+9+1, SEEK_SET);
    const wchar_t str15 = input_control(2);
    // When
    const int result = (int)str15;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test56
CTEST(several_symbols_suite, tab_lat){

    // Given
    fseek(stdin, 139+2+1, SEEK_SET);
    const wchar_t str16 = input_control(2);
    // When
    const int result = (int)str16;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test57
CTEST(several_symbols_suite, dot_lat){

    // Given
    fseek(stdin, 142+2+1, SEEK_SET);
    const wchar_t str17 = input_control(2);
    // When
    const int result = (int)str17;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test58
CTEST(several_symbols_suite, 100symbols){

    // Given
    fseek(stdin, 145+2+1, SEEK_SET);
    const wchar_t str18 = input_control(2);
    // When
    const int result = (int)str18;
    // Then
    const int expected = 115;
    
    ASSERT_EQUAL(expected, result);
}
