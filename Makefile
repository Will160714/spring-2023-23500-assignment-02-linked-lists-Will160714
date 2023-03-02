OBJECTS=List.o main.o Node.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

tests: tests.o List.o Node.o 
	g++ -o tests tests.o List.o Node.o

main.o: main.cpp List.h Node.h

tests.o: tests.cpp List.h Node.h

List.o: List.cpp Node.h List.h

Node.o: Node.cpp Node.h

clean:
	rm -f $(OBJECTS) tests.o