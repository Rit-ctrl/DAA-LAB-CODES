#include<bits/stdc++.h>
using namespace std;

int len (string str){

	int i = 0;
	while(str[i] != '\0')
		i++;

	return i;

}
int calc_score (string str, int arr[]){

	int A_sum = 0, B_sum = 0;
    int n=len(str);
	for(int i=0; i<n; i++){
		cout<<str[i];
		if(str[i] == '1'){
			A_sum += arr[i];
		}
		if(str[i] == '0'){
			B_sum += arr[i];
		}
	}

	return abs(A_sum - B_sum);
}
