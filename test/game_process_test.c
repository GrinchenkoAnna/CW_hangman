#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
#include "../thirdparty/ctest.h"
#include "../src/game_process.h"
#include "../src/input_control.h"
#include "../src/sketch.h"

//russian
//test1
CTEST(GAME_PROCESS_mozhzhevelnik, null_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник0", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern0_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, one_error){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник1", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern1_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, two_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник2", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern2_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, three_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник3", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern3_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, four_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник4", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern4_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, five_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник5", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern5_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, six_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник6", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern6_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, seven_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник7", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern7_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, eight_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник8", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern8_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_mozhzhevelnik, nine_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"можжевельник";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/можжевельник9", "r", stdin);
    game_process(12, 1, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern9_ru", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }

    fclose(statfile);
    fclose(patternfile);

    // When
    const int result = error;
    // Then
    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}

//english
//test1
CTEST(GAME_PROCESS_blackcurrant, null_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant0", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern0_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, one_error){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant1", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern1_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, two_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant2", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern2_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, three_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant3", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern3_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, four_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant4", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern4_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, five_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant5", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern5_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, six_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant6", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern6_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, seven_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant7", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern7_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, eight_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant8", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern8_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
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
CTEST(GAME_PROCESS_blackcurrant, nine_errors){

    // Given
    unsigned int error = 0;
    wchar_t test_word_to_guess[12] = L"blackcurrant";
    wchar_t test_player_word[12] = L"____________", ch1 = L'0', ch2 = L'0';
    wprintf(L"\n");

    freopen("test/game_process/blackcurrant9", "r", stdin);
    game_process(12, 2, test_player_word, test_word_to_guess);

    FILE* statfile = fopen("src/temp/statistics", "r");
    FILE* patternfile = fopen("test/game_process/pattern9_en", "r");

    ch1 = fgetwc(statfile);
    ch2 = fgetwc(patternfile);
    while(ch1 != L'\n' && ch2 != L'\n'){
        if (ch1 != ch2){ error++; }
        ch1 = fgetwc(statfile);
		ch2 = fgetwc(patternfile);
    }

    fclose(statfile);
    fclose(patternfile);

    // When
    const int result = error;
    // Then
    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}
