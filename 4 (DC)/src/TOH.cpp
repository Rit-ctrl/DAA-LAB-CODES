#include<iostream>
using namespace std;

char s = 's', d = 'd', a = 'a';
void toh(int disk, char s, char d, char a){

    if(disk == 1)
        printf("moved 1 from %c to %c using %c\n", s, d, a);

    else{
        toh(disk - 1, s, a, d);
        printf("moved %d from %c to %c\n", disk, s, d);
        toh(disk -1, a, d, s);
    }

}

int main (int argc, char** argv){

    int n;
    cout<<"Enter number of disks \n";
    cin>>n;
    toh(n, s, d, a);
    return 1;
}