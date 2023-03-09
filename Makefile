OBJECTS=OList.o main.o Node.o List.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

tests: tests.o OList.o Node.o 
	g++ -o tests tests.o OList.o Node.o

main.o: main.cpp List.h Node.h

tests.o: tests.cpp OList.h Node.h

List.o: List.cpp Node.h List.h

Node.o: Node.cpp Node.h

OList.o: OList.cpp OList.h Node.h

clean:
	rm -f $(OBJECTS) tests.o 