TARGET = main
INSTALLATION_PATH = /home/user/Документы/Programs/install

.PHONY: all clean install uninstall

all: $(TARGET) 

clean:
	rm -rf $(TARGET) *.o
	
hangman.o: hangman.c
	gcc hangman.c -c -o hangman.o
	
hidden_word.o: hidden_word.c
	gcc hidden_word.c -c -o hidden_word.o

sketch.o: sketch.c
	gcc sketch.c -c -o sketch.o
    
input_control.o: 
	gcc input_control.c -c -o input_control.o 
	
$(TARGET): sketch.o hidden_word.o input_control.o hangman.o
	gcc sketch.o hidden_word.o hangman.o input_control.o -Wall -o $(TARGET)
	
install:
	install main.o $(INSTALLATION_PATH) 
	
uninstall:
	rm -rf $(INSTALLATION_PATH)
