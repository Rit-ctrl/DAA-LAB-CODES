#include<stdio.h>
// #include<math.h>
int extended_ritbash_iter (int arr[], int n){

	int least = arr[0];
	// for(int i=1; i<n; i++)
	// 	if(arr[i] < least)
	// 		least = arr[i];

	while( least > 0){
		int flag = 1;
		for(int j=0; j<n; j++)
			if(arr[j]%least != 0){
				flag = 0;
				break;
			}
		if(flag == 1)
			return least;
		else
			least --;
	}
}

int extended_ritbash_rec (int arr[], int n, int num){

	int flag = 1;
	for(int j=0; j<n; j++)
		if(arr[j]%num != 0){
			flag = 0;
			break;
		}

	if(flag == 1){
		return num;
	}
	else
		extended_ritbash_rec(arr, n, num-1);
	
	
}

int mod (int *x){

	if( *x < 0 )
		return -(*x);
	else
		return *x;
	

}