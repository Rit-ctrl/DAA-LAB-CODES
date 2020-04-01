#include<stdio.h>
// #include<math.h>
int rithic_iter (int a, int b){

	int gcd = 1, i = 1;
	while( i <= b){

		if( a%i == 0 && b%i == 0 ){
			gcd = i;
			i++;
		}
		else{
			i++;
		}
	}
	return gcd;

}

int rithic_rec (int a, int b, int i){

	if( a%i == 0 && b%i == 0){
		return i;
	}
	else{
		rithic_rec(a, b, i-1);
	}


}