#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int method_2_rec (int a, int b){

	static int d = 0;
	if( a == b)
		return a*pow(2, d);
	else{

		if( a%2 == 0 && b%2 == 0){
			a = a/2;
			b = b/2;
			d++;
		}
		else if( a%2 == 0)
				a = a/2;
				else if( b%2 == 0)
					b = b/2;
					else if( a>b )
						a = (a-b)/2;
						else
							b = (b-a)/2;				
	}
	method_2_rec(a, b);
}

int method_2_iter (int a, int b){

	int d = 0;
	
	while(1){
		if( a == b)
			return a*pow(2, d);
		else{

			if( a%2 == 0 && b%2 == 0){
				a = a/2;
				b = b/2;
				d++;
			}
			else if( a%2 == 0)
					a = a/2;
					else if( b%2 == 0)
						b = b/2;
						else if( a>b )
							a = (a-b)/2;
							else
								b = (b-a)/2;				
		}
	}
}
