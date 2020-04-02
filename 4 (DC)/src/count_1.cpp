
#include<bits/stdc++.h>
using namespace std;

void counting(int arr[],int st,int end, int &count)
{ 
	if(st>end)
	 return;
	else
	{
		if(st==end)
			  { if(arr[st]==1)
					 { count++;
					 }
					 return;
			  }
		else 
		{  
			int mid=(st+end)/2;
			counting(arr,st,mid,count);
			counting(arr,mid+1,end,count);         

		}   
	} 
}

int main()
{
	int count=0;
   int n;
   // int arr[]={1,0,1,0,1,1,0,1,1};
   // int n=sizeof(arr)/sizeof(int);
   cout<<"enter the number of elements in binary array ";
   cin>>n;
   int arr[n];
   cout<<endl<<"enter the elements of the array ";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   counting(arr,0,n-1,count);
   cout<<"count of 1s "<<count;

}