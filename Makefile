TARGET = main
INSTALLATION_PATH = /home/user/Документы/Programs/install

.PHONY: all clean install uninstall

all: $(TARGET) 

clean:
	rm -rf $(TARGET) *.o
	
$(TARGET): hangman.c
	gcc hangman.c -Wall -o $(TARGET) 
	
install:
	install $(TARGET) $(INSTALLATION_PATH) 
	
uninstall:
	rm -rf $(INSTALLATION_PATH)
