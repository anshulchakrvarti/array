#include<iostream>
using namespace std;
int main(){
    // write a program to copy the contents of one array into another in the reverse order;
int arr[5]={1,2,3,4,5};
int brrd[5];
int x=5-1;
for (int i =0; i <5; i++)
{ 
     brrd[i]=arr[x];
      cout<<" "<<brrd[i];
     x--;
}
 

    return 0;
}