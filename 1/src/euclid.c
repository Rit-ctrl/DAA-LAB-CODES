#include<stdio.h>
// #include<math.h>
int euclid_rec (int a, int b){			//a > b

	if( a%b == 0){
		return b;
	}

	euclid_rec(b, a%b);
}

int euclid_iter (int a, int b){

	while( a%b != 0 && b != 0){
		int temp = a;
		a = b;
		b = temp%b;

	}
	return b;

}