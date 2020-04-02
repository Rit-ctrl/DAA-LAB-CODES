#include<iostream>
#include"../include/merge_sort.h"

using namespace std;

int main (){

    int n;
    cout<<"Enter number of elemments of array\n";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    merge_sort(arr, 0, n-1);

    for(int j=0; j<=n-1; j++)
		cout<<arr[j]<<" ";

}