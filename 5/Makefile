all:merge_insertion sort_arrays
merge_insertion:merge_insertion.o hmerge_insertion.o
	g++ obj/merge_insertion.o obj/hmerge_insertion.o -o merge_insertion
merge_insertion.o:
	g++ -c src/merge_insertion.cpp -o obj/merge_insertion.o 
hmerge_insertion.o:
	g++ -c src/hmerge_insertion.cpp -o obj/hmerge_insertion.o 
sort_arrays:sort_arrays.o hsort_arrays.o
	g++ obj/sort_arrays.o obj/hsort_arrays.o -o sort_arrays
sort_arrays.o:
	g++ -c src/sort_arrays.cpp -o obj/sort_arrays.o 
hsort_arrays.o:
	g++ -c src/hsort_arrays.cpp -o obj/hsort_arrays.o 