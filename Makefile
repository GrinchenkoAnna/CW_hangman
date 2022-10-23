TARGET = main
TEST = unit_tests

CC = gcc
CFLAGS = -c -Wall -Werror

DIR_SRC = ./src/
DIR_OBJ = ./build/o_src/
DIR_TEST_SCR = ./test/
DIR_TEST_OBJ = ./build/o_test/
DIR_CTEST = ./thirdparty/
DIR_TEMP = ./src/temp/

OBJ = $(DIR_OBJ)hangman.o $(DIR_OBJ)language.o $(DIR_OBJ)hidden_word.o \
        $(DIR_OBJ)game_process.o $(DIR_OBJ)sketch.o $(DIR_OBJ)input_control.o
TEST_OBJ = $(DIR_TEST_OBJ)sketch.o \
        $(DIR_TEST_OBJ)hidden_word.o $(DIR_TEST_OBJ)hidden_word_test.o \
        $(DIR_TEST_OBJ)input_control.o $(DIR_TEST_OBJ)input_control_test.o \
        $(DIR_TEST_OBJ)game_process.o $(DIR_TEST_OBJ)game_process_test.o \
        $(DIR_TEST_OBJ)language.o $(DIR_TEST_OBJ)language_test.o \
        $(DIR_TEST_OBJ)main.o

.PHONY: all clean

all: $(TARGET) 
test: $(TEST)

clean:
	rm -rf $(TARGET) $(TEST) $(DIR_OBJ)*.o $(DIR_TEST_OBJ)*.o \
	        $(DIR_TEMP)statistics


#main
$(DIR_OBJ)hangman.o: $(DIR_SRC)hangman.c
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_OBJ)language.o: $(DIR_SRC)language.c 
	$(CC) $(CFLAGS) $< -o $@
		
$(DIR_OBJ)hidden_word.o: $(DIR_SRC)hidden_word.c 
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_OBJ)sketch.o: $(DIR_SRC)sketch.c
	$(CC) $(CFLAGS) $< -o $@

$(DIR_OBJ)input_control.o: $(DIR_SRC)input_control.c
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_OBJ)game_process.o: $(DIR_SRC)game_process.c 
	$(CC) $(CFLAGS) $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -Wall -Werror -o $(TARGET)

	
#test
$(DIR_TEST_OBJ)main.o: $(DIR_TEST_SCR)main.c 
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)game_process.o: $(DIR_SRC)game_process.c
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)game_process_test.o: $(DIR_TEST_SCR)game_process_test.c 
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)input_control.o: $(DIR_SRC)input_control.c
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)input_control_test.o: $(DIR_TEST_SCR)input_control_test.c 
	$(CC) $(CFLAGS) $< -o $@

$(DIR_TEST_OBJ)hidden_word.o: $(DIR_SRC)hidden_word.c
	$(CC) $(CFLAGS) $< -o $@

$(DIR_TEST_OBJ)hidden_word_test.o: $(DIR_TEST_SCR)hidden_word_test.c 
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)sketch.o: $(DIR_SRC)sketch.c
	$(CC) $(CFLAGS) $< -o $@

$(DIR_TEST_OBJ)language.o: $(DIR_SRC)language.c 
	$(CC) $(CFLAGS) $< -o $@
	
$(DIR_TEST_OBJ)language_test.o: $(DIR_TEST_SCR)language_test.c
	$(CC) $(CFLAGS) $< -o $@

$(TEST): $(TEST_OBJ)
	$(CC) $(TEST_OBJ) -Wall -Werror -o $(TEST)
