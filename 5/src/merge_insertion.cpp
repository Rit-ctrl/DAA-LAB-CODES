#include<iostream>
#include"../include/hmerge_insertion.h"
using namespace std;

 int  main()
{

 int  arr[1000000];
  int  i;
for(i=0;i<1000000;i++)
   arr[i]=1000000-i;
merge_sort(arr,0,1000000-1);
check(arr);

// for(i=0;i<1000000;i++)
//  cout<<arr[i]<<" ";
    return 0;
}

