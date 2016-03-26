CC=g++
CFLAGS=-std=c++14 -c -Wall
LDFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
SOURCES=../src/Game.cpp ../src/GameFunctions.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Game

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o: 
	$(CC) $(CFLAGS) $< -o $@

#clean:
	#rm -rf *.o Game
