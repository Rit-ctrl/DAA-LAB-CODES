all: toh 2way 3way DC_GCD

toh:
	g++ src/TOH.cpp -o towers_of_hanoi

2way: obj/2way.o obj/merge_sort.o
	g++ obj/2way.o obj/merge_sort.o -o 2way

obj/2way.o:
	g++ -c src/2way.cpp -o obj/2way.o

obj/merge_sort.o:
	g++ -c src/merge_sort.cpp -o obj/merge_sort.o

3way: obj/merge_sort.o
	g++ src/3_way.cpp obj/merge_sort.o -o 3way

DC_GCD: obj/euclid.o src/GCD.cpp
	g++ src/GCD.cpp obj/euclid.o -o DC_GCD

obj/euclid.o:
	g++ -c src/euclid.c -o obj/euclid.o