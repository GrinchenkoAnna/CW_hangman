TARGET = main
TEST = unit_tests

SOURCES = $(wildcard $(DIR_SRC)*.c)
OBJECTS  = $(patsubst $(DIR_SRC)%.c, $(DIR_OBJ)%.o, $(SOURCES))
#TEST_SOURCES = $(wildcard $(DIR_TEST_SCR)*.c)
#TEST_OBJECTS = $(patsubst $(DIR_TEST_SCR)%.c, $(DIR_TEST_OBJ)%.o, $(TEST_SOURCES))

DIR_SRC = ./src/
DIR_OBJ = ./build/o_src/
DIR_TEST_SCR = ./test/
DIR_TEST_OBJ = ./build/o_test/
DIR_CTEST = ./thirdparty/
DIR_TEMP = ./src/temp/

.PHONY: all clean test

all: $(TARGET) 

clean:
	rm -rf $(TARGET) unit_tests $(DIR_OBJ)*.o $(DIR_TEST_OBJ)*.o $(DIR_TEMP)statistics $(DIR_TEMP)picture

$(DIR_OBJ)hangman.o: $(DIR_SRC)hangman.c
	gcc $< -c -Wall -Werror -o $@
	
$(DIR_OBJ)language.o: $(DIR_SRC)language.c 
	gcc $< -c -Wall -Werror -o $@
		
$(DIR_OBJ)hidden_word.o: $(DIR_SRC)hidden_word.c 
	gcc $< -c -Wall -Werror -o $@
	
$(DIR_OBJ)sketch.o: $(DIR_SRC)sketch.c
	gcc $< -c -Wall -Werror -o $@

$(DIR_OBJ)input_control.o: $(DIR_SRC)input_control.c
	gcc $< -c -Wall -Werror -o $@
	
$(DIR_OBJ)game_process.o: $(DIR_SRC)game_process.c 
	gcc $< -c -Wall -Werror -o $@

$(TARGET): $(OBJECTS)
	gcc $(OBJECTS) -Wall -Werror -o $(TARGET)
	
#test
$(DIR_TEST_OBJ)main.o: $(DIR_TEST_SCR)main.c $(DIR_CTEST)ctest.h
	gcc -I thirdparty -I test $(DIR_TEST_SCR)main.c -c -Wall -Werror -o $(DIR_TEST_OBJ)main.o
	
$(DIR_TEST_OBJ)game_process.o: $(DIR_SRC)game_process.c
	gcc $(DIR_SRC)game_process.c -c -Wall -Werror -o $(DIR_TEST_OBJ)game_process.o 
	
$(DIR_TEST_OBJ)input_control.o: $(DIR_SRC)input_control.c
	gcc $(DIR_SRC)input_control.c -c -Wall -Werror -o $(DIR_TEST_OBJ)input_control.o 

$(DIR_TEST_OBJ)game_process_test.o: $(DIR_TEST_SCR)game_process_test.c $(DIR_CTEST)ctest.h 
	gcc -I thirdparty -I test $(DIR_TEST_SCR)game_process_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)game_process_test.o
	
$(DIR_TEST_OBJ)hidden_word.o: $(DIR_SRC)hidden_word.c
	gcc $(DIR_SRC)hidden_word.c -c -Wall -Werror -o $(DIR_TEST_OBJ)hidden_word.o 

$(DIR_TEST_OBJ)hidden_word_test.o: $(DIR_TEST_SCR)hidden_word_test.c $(DIR_CTEST)ctest.h 
	gcc -I thirdparty -I test $(DIR_TEST_SCR)hidden_word_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)hidden_word_test.o
	
$(DIR_TEST_OBJ)sketch.o: $(DIR_SRC)sketch.c
	gcc $(DIR_SRC)sketch.c -c -Wall -Werror -o $(DIR_TEST_OBJ)sketch.o 

$(DIR_TEST_OBJ)sketch_test.o: $(DIR_TEST_SCR)sketch_test.c $(DIR_CTEST)ctest.h 
	gcc -I thirdparty -I test $(DIR_TEST_SCR)sketch_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)sketch_test.o
	
$(DIR_TEST_OBJ)input_control_test.o: $(DIR_TEST_SCR)input_control_test.c $(DIR_CTEST)ctest.h 
	gcc -I thirdparty -I test $(DIR_TEST_SCR)input_control_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)input_control_test.o
	
$(DIR_TEST_OBJ)language.o: $(DIR_SRC)language.c 
	gcc $(DIR_SRC)language.c -c -Wall -Werror -o $(DIR_TEST_OBJ)language.o
	
$(DIR_TEST_OBJ)language_test.o: $(DIR_TEST_SCR)language_test.c $(DIR_CTEST)ctest.h 
	gcc $(DIR_TEST_SCR)language_test.c -c -Wall -Werror -o $(DIR_TEST_OBJ)language_test.o
	
test: $(DIR_TEST_OBJ)sketch.o $(DIR_TEST_OBJ)sketch_test.o $(DIR_TEST_OBJ)hidden_word.o $(DIR_TEST_OBJ)hidden_word_test.o $(DIR_TEST_OBJ)input_control.o $(DIR_TEST_OBJ)input_control_test.o $(DIR_TEST_OBJ)game_process.o $(DIR_TEST_OBJ)game_process_test.o $(DIR_TEST_OBJ)language.o $(DIR_TEST_OBJ)language_test.o $(DIR_TEST_OBJ)main.o
	gcc $(DIR_TEST_OBJ)sketch.o $(DIR_TEST_OBJ)sketch_test.o $(DIR_TEST_OBJ)hidden_word.o $(DIR_TEST_OBJ)hidden_word_test.o $(DIR_TEST_OBJ)input_control.o $(DIR_TEST_OBJ)input_control_test.o $(DIR_TEST_OBJ)game_process.o $(DIR_TEST_OBJ)game_process_test.o $(DIR_TEST_OBJ)language.o $(DIR_TEST_OBJ)language_test.o $(DIR_TEST_OBJ)main.o -Wall -Werror -o $(TEST)
