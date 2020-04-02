#include<iostream>
#include"../include/merge_sort.h"

using namespace std;

void merge_sort_3(int arr[], int s, int e);
// void merge(int arr[], int s, int mid, int e);

int main (){

	int n;
    cout<<"Enter number of elemments of array\n";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    merge_sort_3(arr, 0, n-1);

    for(int j=0; j<=n-1; j++)
		cout<<arr[j]<<" ";
	
	return 0;

}

void merge_sort_3(int arr[], int s, int e){

	if( e-s+1>=3 ){
		// cout<<"merge_sort\n";
		int mid1 = (s + e)/3;
		int mid2 = mid1 + 1 + (s + e)/3;
		
		merge_sort(arr, s, mid1);
		// cout<<"1done";
		merge_sort(arr, mid1 + 1, mid2);
		// cout<<"2done";
		merge_sort(arr, mid2 + 1, e);
		// cout<<"3done";
		merge(arr, s, mid1, mid2);
		// cout<<"merge_1 complete\n";
		merge(arr, s, mid2, e);
		// cout<<"merge_2 complete\n";
	}
	else if( e-s + 1 == 2){

		if(arr[e] < arr[s]){
			int tmp = arr[e];
			arr[e] = arr[s];
			arr[s] = tmp;
		}
	}

}