#include<iostream>

using namespace std;

int t, n2;

int calib (int arr[], int *k){

	if(arr[0] < 0){
		t = -arr[0];
		for(int i=0; i<n2; i++)
			arr[i] += t;
		*k += 2*t;
		return t;
	}
	else{
		return t;
	}
	
}

void method_2 (int arr[], int *k, int n_l){

    n2 = n_l;
	int size = arr[n2], hash[100] = {0};

	t = calib(arr, k);
	cout<<"\nk = "<<*k;
	// for(int i=0; i<n2; i++)
	// 	cout<<arr[i]<<" ";

	for(int i=0; i<n2; i++){
		hash[arr[i]] += 1;
		int comp = *k - arr[i];
		if(comp >= 0){
			if(comp == arr[i] && hash[comp] > 1){
				cout<<"\nsamePair Found: "<<arr[i] - t<<", "<<comp - t;
			}
			else if(hash[comp] > 0){
				cout<<"\nPair Found: "<<arr[i] - t<<", "<<comp - t;
			}
		}
	}
}