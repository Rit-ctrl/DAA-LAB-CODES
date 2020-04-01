#include<iostream>
#include"../include/hsort_arrays.h"
using namespace std;
// #define k 3
// #define n 3

// using namespace std;

// void L1 (int arr[][n], int dest[]);
// void sort (int arr1[], int arr2[], int dest[], int, int);
// void L2 (int arr[][n], int start, int end);
// void L3 (int arr[][n], int dest[]);
// void L5 (int arr[][n], int dest[]);
// void heapify ();
// struct node
// { 
//   int data;
//   struct node *lptr;
//   struct node *rptr;
//  };
//  struct node *tptr=NULL;
// void insert(int x);
// void inorder(struct node* ptr);

// int dest[n*k], size = 0;

// struct min_heap{
// 	int data;
// 	int ptr;
// }heap[k];

int main (){
	
	int arr[k][n]={{1, 2, 4}, 
			{0, 7, 8},
			{-13, 6, 7}
			};
	// int dest[n*k], size = 0;
	int dest[n*k], size = 0;
   struct node* tptr=NULL;
	for(int i=0;i<k;i++)            //treesort
	  {for(int j=0;j<n;j++)
	       {insert(arr[i][j],&tptr);}
	  }
	  cout<<"L4 ";
	  inorder(tptr);
cout<<endl;

   L2(arr,0,2);

	L1(arr, dest);                  // merge two at a time 
	
	 L3(arr, dest);                  // pointer logic

	
	 L5(arr, dest);
	  
 
	
	    
	        //  inorder(tptr);
	        return 0;
}
