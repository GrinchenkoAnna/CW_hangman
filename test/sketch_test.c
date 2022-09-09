#include <stdio.h>
#include "../thirdparty/ctest.h"
#include "../src/sketch.h"

//test1
CTEST(SKETCH_null_nine, null){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(0);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/0_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test2
CTEST(SKETCH_null_nine, one){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(1);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/1_error", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test3
CTEST(SKETCH_null_nine, two){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(2);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/2_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test4
CTEST(SKETCH_null_nine, three){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(3);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/3_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test5
CTEST(SKETCH_null_nine, four){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(4);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/4_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test6
CTEST(SKETCH_null_nine, five){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(5);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/5_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test7
CTEST(SKETCH_null_nine, six){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(6);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/6_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test8
CTEST(SKETCH_null_nine, seven){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(7);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/7_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test9
CTEST(SKETCH_null_nine, eight){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(8);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/8_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test10
CTEST(SKETCH_null_nine, nine){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(9);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/9_errors", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}

//test11
CTEST(SKETCH_overflow, default_error){

    // Given    
    int error = 0;
    char ch1 = 0, ch2 = 0;
    
    sketch(10);
        
    FILE* picfile = fopen("src/temp/picture", "r"); 
    FILE* patternfile = fopen("test/sketch/default_error", "r"); 
    
    ch1 = fgetc(picfile);
    ch2 = fgetc(patternfile);
    while(ch1 != '\n' && ch2 != '\n'){
        if (ch1 != ch2){ error++; } 
        ch1 = fgetc(picfile);
		ch2 = fgetc(patternfile);
    }
            
    fclose(picfile);  
    fclose(patternfile);
    
    // When
    const int result = error;
    // Then
    const int expected = 0;
    
    ASSERT_EQUAL(expected, result);
}
