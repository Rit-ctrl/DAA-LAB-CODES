#include<iostream>
#include<bitset>
#include<math.h>

#define max_bits 8
using namespace std;

int decToBinary(int n) 
{ 
    // Size of an integer is assumed to be 32 bits 
	string str = "0";
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1)
			char* temp = "1";
			str.append(temp);
        else
            cout << "0"; 
    } 
}

int main (){

	int n;
	cout<<"Enter any positive number\n";
	cin>>n;
	 
	int bits = ceil(log2f(n)) + 1;

	

	// cout<<bin;

	string num1 = bitset<8>(n).to_string();
	
	// for(int j = 0; j<bits; j++)
	// 	num1[j] = num1[max_bits-bits+j];

	// for(int i = bits; i<max_bits; i++)
	// 	num1[i] = '\0';

	string num2 = num1;
	cout<<num1<<num2<<endl;

	int prod = 0;
	int i=0;
	// while(bits >= 0){

	// 	int mult;
	// 	if(num2[bits] == 1){
	// 		bitset
	// 	}

	// }


}	