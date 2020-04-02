#include<iostream>

using namespace std;

void method_3(int arr[], int k, int n){

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++)
			if(arr[i]+arr[j] == k){
				cout<<"\nPair Found: "<<arr[i]<<", "<<arr[j];
			}
	}
}