#include<iostream>
#include<algorithm>

using namespace std;

int n1;

void method_1 (int arr[], int k, int start, int end){
	//cout<<"1";
	if(start == end){
		// cout<<"ended";
		return;
	}
	else{
		if(arr[start] + arr[end] == k){
			cout<<"\nPair Found: "<<arr[start]<<", "<<arr[end];
			start = start + 1;
		}
		else{
			if(arr[start] + arr[end] > k)
				end = end - 1;
			else{
				start = start + 1;
			}
		}
	}
	method_1(arr, k, start, end);
}

void pre_method_1 (int arr[], int k, int n_l){
    // n1 = n_l;
    method_1(arr, k, 0, n_l-1);
}
