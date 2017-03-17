CC=g++
CFLAGS=-I.

slot_game: Usage.o main.o RandomNumber.o  Slot.o User.o
	$(CC) -o slot_game Usage.o main.o RandomNumber.o  Slot.o User.o

Usage.o: Usage.cpp
	$(CC) -c -o Usage.o Usage.cpp $(CFLAGS)
RandomNumber.o: RandomNumber.cpp
	$(CC) -c -o RandomNumber.o RandomNumber.cpp $(CFLAGS)
Slot.o: Slot.cpp
	$(CC) -c -o Slot.o Slot.cpp $(CFLAGS)
User.o: User.cpp
	$(CC) -c -o User.o User.cpp $(CFLAGS)
main.o: main.cpp
	$(CC) -c -o main.o  main.cpp $(CFLAGS)



