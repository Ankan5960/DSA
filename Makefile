all: main

main: main.cpp src/MyDSA.cpp src/LinkedList.cpp
	g++ -Iinclude main.cpp src/MyDSA.cpp src/LinkedList.cpp -o main

clean:
	rm -f main
