#include<iostream>
using namespace std;
int main(){
int n; //write a program to reverse the array without using any extra array
cout<<"enter the number n:";
cin>>n;
int arr[n];
cout<<"enter the element";
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
int i=0;
int j=n-1;
 while (i<j)
 {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
 }
for (int j =0; j<n; j++)
{
   cout<<" "<<arr[j];
}
    return 0;
}