TARGET = main

DIR_SRC = ./src/
DIR_OBJ = ./build/

#SRC = $(wildcard $(DIR_SRC)*.c)
#OBJ = $(patsubst $(DIR_SRC)%.c, $(DIR_OBJ)%.o, $(SRC))

.PHONY: all clean

all: $(TARGET) 

clean:
	rm -rf $(TARGET) $(DIR_OBJ)*.o

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
