#include <stdio.h>
#include <string.h>
#include "../thirdparty/ctest.h"
#include "../src/hidden_word.h"

//test1
CTEST(reading_word_from_list, read_and_write){

    // Given    
    char word[15] = {0};
    hidden_word(word);
    
    int size = strlen(word);
    int nonempty = 0;
    
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
