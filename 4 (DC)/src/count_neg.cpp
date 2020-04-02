
#include<bits/stdc++.h>
using namespace std;

 void counting_negative(int arr[],int st,int end,int &ncount)
 {
		if(st>end)
	 return;
	else
	{
		if(st==end)
			  { if(arr[st]<0)
					 { ncount++;
					 }
					 return;
			  }
		else 
		{  
			int mid=(st+end)/2;
			counting_negative(arr,st,mid,ncount);
			counting_negative(arr,mid+1,end,ncount);         

		}   
	} 
 }

int main()
{

int n1, ncount=0;
cout<<"enter the number of elements in array ";
cin>>n1;
int arr1[n1];
cout<<endl<<"enter the elements of the array ";
for(int i=0;i<n1;i++)
cin>>arr1[i];

counting_negative(arr1,0,n1-1,ncount);
cout<<endl<<"count of negative nos "<<ncount;

}