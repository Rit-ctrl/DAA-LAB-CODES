all:pattern q1

pattern: 
	g++ src/pattern.cpp -o pattern

q1: obj/q1_method_1.o obj/q1_method_2.o obj/q1_method_3.o obj/q1.o
	g++ obj/q1.o obj/q1_method_1.o obj/q1_method_2.o obj/q1_method_3.o -o q1

obj/q1.o: src/q1.cpp
	g++ -c src/q1.cpp -o obj/q1.o

obj/q1_method_1.o: src/q1_method_1.cpp
	g++ -c src/q1_method_1.cpp -o obj/q1_method_1.o

obj/q1_method_2.o: src/q1_method_2.cpp
	g++ -c src/q1_method_2.cpp -o obj/q1_method_2.o

obj/q1_method_3.o: src/q1_method_3.cpp
	g++ -c src/q1_method_3.cpp -o obj/q1_method_3.o