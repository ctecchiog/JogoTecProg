all: compile link execute clear

compile: 
	g++ -c *.cpp -I"SFML\include"

link:
	g++ *.o -Wall -o main -L"SFML\lib" -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

execute:
	./main.exe

clear:
	del *.o
	clear