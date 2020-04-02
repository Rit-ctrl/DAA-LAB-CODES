#include<iostream>
#include"../include/euclid.h"
using namespace std;

void merge_sort(int arr[], int s, int e, int &gcd);
void merge(int arr[], int s, int mid, int e);

int main (){

    int n;
    cout<<"Enter number of elemments of array\n";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int gcd = arr[0];
    merge_sort(arr, 0, n-1, gcd);
    cout<<"\nGCD = "<<gcd<<endl;
    return 0;
}

void merge(int arr[], int s, int mid, int e){

	// int temp[e-s+1];
	// int i = 0;
	// int l = s;
	// int r = mid+1;
	// while( l<=mid && r<=e ){

	// 	if(arr[l] < arr[r]){
	// 		temp[i] = arr[l];
	// 		l++;
	// 		i++;
	// 	}
	// 	else if(arr[l] > arr[r]){
	// 		temp[i] = arr[r];
	// 		r++;
	// 		i++;
	// 	}
	// 	else if(arr[l] == arr[r]){
	// 		temp[i] = arr[r];
	// 		i++;
	// 		r++;
	// 		temp[i] = arr[l];
	// 		i++;
	// 		l++;
	// 	}

	// }

	// while(l <= mid){
	// 	temp[i] = arr[l];
	// 	i++; l++;
	// }

	// while(r <= e){
	// 	temp[i] = arr[r];
	// 	i++; r++;
	// }
	// cout<<endl;
	// for(int j=0; j<i; j++){
	// 	arr[s+j] = temp[j];
	// 	// cout<<arr[j]<<" ";
	// }
    cout<<endl;
    for(int i=s; i<e; i++)
        cout<<arr[i];
}

void merge_sort(int arr[], int s, int e, int &gcd){

	if(e - s == 0){
        // cout<<"0";
		gcd = euclid_rec(arr[s], gcd);
        return;
	}
    if(e - s == 1){
        // cout<<"1";
        int gcd1 = euclid_rec(arr[s], arr[e]);
        gcd = euclid_rec(gcd, gcd1);
        return;
    }

    int mid = (s + e)/2;

    merge_sort(arr, s, mid, gcd);
	merge_sort(arr, mid+1, e, gcd);

    return;
}
