all: oop_exercise_01

oop_exercise_01: main.o FazzyNumber.o 
	g++ main.o FazzyNumber.o -o oop_exercise_01

main.o: main.cpp
	g++ -c main.cpp

FazzyNumber.o: FazzyNumber.cpp
	g++ -c FazzyNumber.cpp

clean:
	rm -rf *.o oop_exercise_01