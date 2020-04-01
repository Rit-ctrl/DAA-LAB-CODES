all:partition

partition:partition.o helper.o
	g++ obj/partition.o obj/helper.o -o partition

partition.o:
	g++ -c src/partition.cpp -o obj/partition.o

helper.o:
	g++ -c src/helper.cpp -o obj/helper.o