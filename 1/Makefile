all:gcd

gcd:obj/assignment_1.o obj/euclid.o obj/method_2.o obj/r_iter.o obj/ex_ritbash.o
	gcc obj/assignment_1.o obj/euclid.o obj/method_2.o obj/r_iter.o obj/ex_ritbash.o -lm -o gcd

obj/assignment_1.o:src/assignment_1.c
	gcc -c src/assignment_1.c -o obj/assignment_1.o

obj/euclid.o:src/euclid.c
	gcc -c src/euclid.c -o obj/euclid.o

obj/method_2.o:src/method_2.c
	gcc -c src/method_2.c -o obj/method_2.o

obj/r_iter.o:src/r_iter.c
	gcc -c src/r_iter.c -o obj/r_iter.o

obj/ex_ritbash.o: src/ex_ritbash.c
	gcc -c src/ex_ritbash.c -o obj/ex_ritbash.o
