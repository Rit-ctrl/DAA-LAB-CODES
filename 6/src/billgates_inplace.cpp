#include<iostream>

using namespace std;
int main()
{
	   
		int n;
		cout<<"Enter number of elements of array\n";
		cin>>n;
		int arr[n];
		cout<<"Enter elements of array\n";
		for(int i=0; i<n; i++)
			cin>>arr[i];
		for(int i=0;i<=n-2;i=i+2)
		{
			if(arr[i]<arr[i+1] && i+1<n)
				swap(arr[i],arr[i+1]);
		}
		int max=arr[0];
		int mi;           //max index
		if(n%2==0)mi=n-2;
		else mi=n-1;
		for(int i=2;i<=mi;i=i+2)
		if(arr[i]>max)max=arr[i];

		int min=arr[1];

		for(int i=3;i<=n-1;i=i+2)
			if(arr[i]<min)min=arr[i];

		cout<<"min "<<min<<" "<<"max "<<max;       

	return 0;
}