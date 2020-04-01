#include<iostream>
#define k 3
#define n 3

using namespace std;
void L1 (int arr[][n], int dest[]);
void sort (int arr1[], int arr2[], int dest[], int, int);
void L2 (int arr[][n], int start, int end);
void L3 (int arr[][n], int dest[]);
void L5 (int arr[][n], int dest[]);
void heapify ();
struct node
{ 
  int data;
  struct node *lptr;
  struct node *rptr;
 };
//  struct node *tptr=NULL;
void insert(int x,struct node ** tptr);
void inorder(struct node* ptr);

// int dest[n*k], size = 0;

struct min_heap{
	int data;
	int ptr;
};
// heap[k];