#include<iostream>
#include<algorithm>
#include<chrono>
#include<fstream>
#include"../include/q1_method_1.h"
#include"../include/q1_method_2.h"
#include"../include/q1_method_3.h"

using namespace std::chrono;
using namespace std;

int n;


int main (){

	// method to input array manually
	cout<<"Enter number of elements of array";
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int k;
	cout<<"Enter k";
	cin>>k;

	// fstream f1("output.csv", ios::app);


	// for(int i=2; i<=100; i++){
	// 	n = i;
	// 	srand(i);
	// 	int arr1[n], arr2[n], arr3[n];
	// 	cout<<endl;
	// 	for(int j=0; j<n; j++){
	// 		arr1[j] = arr2[j] = arr3[j]= rand()%100;
	// 		cout<<" "<<arr2[j];
	// 	}
	// 	cout<<endl;
	// 	int k = rand() % 100;
	// 	cout<<"n = "<<n;

	// 	cout<<"method 1\n";
	// 	// auto start1 = high_resolution_clock::now();
	// 	sort(arr1, arr1 + n);
	// 	method_1(arr1, k);
	// 	// auto stop1 = high_resolution_clock::now();
	// 	cout<<"\nmethod 2\n";
	// 	int temp = k;
	// 	auto start2 = high_resolution_clock::now();
	// 	sort(arr2, arr2 + n);
	// 	method_2(arr2, &temp);
	// 	auto stop2 = high_resolution_clock::now();
	// 	cout<<"\nmethod 3\n";
	// 	auto start3 = high_resolution_clock::now();
	// 	method_3(arr3, k);
	// 	auto stop3 = high_resolution_clock::now();

	// 	duration<float> d1 = (stop1 - start1);
	// 	duration<float> d2 = (stop2 - start2);
	// 	duration<float> d3 = (stop3 - start3);
		
	// 	f1<<n<<","<<d1.count()<<","<<d2.count()<<","<<d3.count()<<endl;

	// }

	sort(arr,arr + n);
	pre_method_1(arr, k, n);
	cout<<endl;

	int t_k = k, t_arr[n];
	for(int i=0; i<n; i++)
		t_arr[i] = arr[i];
	method_2(t_arr, &t_k, n);
	cout<<endl;

	method_3(arr, k, n);
	cout<<endl;

	return 0;
}