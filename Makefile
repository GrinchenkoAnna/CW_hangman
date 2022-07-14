TARGET = main

DIR_SRC = ./src/
DIR_OBJ = ./build/o_src/
DIR_TEST_SCR = ./test/
DIR_TEST_OBJ = ./build/o_test/
DIR_CTEST = ./thirdparty/

#SRC = $(wildcard $(DIR_SRC)*.c)
#OBJ = $(patsubst $(DIR_SRC)%.c, $(DIR_OBJ)%.o, $(SRC))

.PHONY: all clean

all: $(TARGET) 

clean:
	rm -rf $(TARGET) test1 $(DIR_OBJ)*.o $(DIR_TEST_OBJ)*.o

#$(DIR_OBJ)%.o: $(DIR_SRC)%.c
#	gcc $< -Wall -Werror -o $@
	
$(DIR_OBJ)hangman.o: $(DIR_SRC)hangman.c
	gcc $(DIR_SRC)hangman.c -c -Wall -Werror -o $(DIR_OBJ)hangman.o
	
$(DIR_OBJ)hidden_word.o: $(DIR_SRC)hidden_word.c
	gcc $(DIR_SRC)hidden_word.c -c -Wall -Werror -o $(DIR_OBJ)hidden_word.o

$(DIR_OBJ)sketch.o: $(DIR_SRC)sketch.c
	gcc $(DIR_SRC)sketch.c -c -Wall -Werror -o $(DIR_OBJ)sketch.o
    
$(DIR_OBJ)input_control.o: 
	gcc $(DIR_SRC)input_control.c -c -Wall -Werror -o $(DIR_OBJ)input_control.o 
	
$(TARGET): $(DIR_OBJ)hangman.o $(DIR_OBJ)hidden_word.o $(DIR_OBJ)sketch.o $(DIR_OBJ)input_control.o
	gcc $(DIR_OBJ)hangman.o $(DIR_OBJ)hidden_word.o $(DIR_OBJ)sketch.o $(DIR_OBJ)input_control.o -Wall -Werror -o $(TARGET)
	
#test 
$(DIR_TEST_OBJ)main.o: $(DIR_TEST_SCR)main.c $(DIR_CTEST)ctest.h
	gcc -I thirdparty -I test $(DIR_TEST_SCR)main.c -c -Wall -Werror -o $(DIR_TEST_OBJ)main.o

$(DIR_TEST_OBJ)training_test.o: $(DIR_TEST_SCR)training_test.c $(DIR_CTEST)ctest.h
	gcc -I thirdparty -I test $(DIR_TEST_SCR)training_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)training_test.o
	
test: $(DIR_TEST_OBJ)training_test.o $(DIR_TEST_OBJ)main.o
	gcc $(DIR_TEST_OBJ)training_test.o $(DIR_TEST_OBJ)main.o -Wall -Werror -o test1
