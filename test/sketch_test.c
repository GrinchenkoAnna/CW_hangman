#include <stdio.h>
#include "../thirdparty/ctest.h"
#include "../src/sketch.h"

//test1
CTEST(null_nine, null){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(0);
    freopen ("/dev/tty", "a", stdout);
    
    char buffer[99] = {0};    
    char output[99] = "  (@)(@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    int read = fread(buffer, 1, 99, recordfile);   
    fclose(recordfile);  
       
    int error = 0; 
        
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test2
CTEST(null_nine, one){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(1);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "  (@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test3
CTEST(null_nine, two){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(2);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "  (@)\n (@)()\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test4
CTEST(null_nine, three){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(3);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "  (@)\n (@)()\n  (@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test5
CTEST(null_nine, four){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(4);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "  (@)\n (@)()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test6
CTEST(null_nine, five){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(5);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "  (@)\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test7
CTEST(null_nine, six){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(6);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test8
CTEST(null_nine, seven){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(7);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "\n    ()\n     |\n    /\n   | \n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test9
CTEST(null_nine, eight){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(8);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "\n    ()\n     |\n    /\n   | \n   |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(null_nine, nine){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(9);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = "\n\n     _\n    / \\\n   |  ()\n   |\\\n  /|\n -----\n \\---/\n  \\-/\n   -\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(negative, minus_two){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(-2);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = " ___________\n|           |\n|   ERROR   |\n|    X_X    |\n|___________|\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(overflow, ten){

    // Given    
    
    freopen("test/sketch_record", "w", stdout);   
    sketch(10);
    freopen ("/dev/tty", "a", stdout);
    
    FILE *recordfile = fopen("test/sketch_record", "r");
    
    char buffer[99] = {0};    
    char output[99] = " ___________\n|           |\n|   ERROR   |\n|    X_X    |\n|___________|\n";
    
    int read = fread(buffer, 1, 99, recordfile);    
    int error = 0; 
    
    if (read != 0){
        for (int i = 0; i < 99; i++){
            if (buffer[i] != output[i]){
                error++;                
            }
        }
    }   
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
