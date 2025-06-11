#include<iostream>
#include<climits>
using namespace std;
int main(){
int mx=INT_MIN;
int arr[10]={1,2,3,4,5,6,758,85,90,1000};
for (int i = 0; i <10; i++)
{
    mx=max(mx,arr[i]);
}
int smx=INT_MIN;
for (int i = 0; i < 10; i++)
{ 
if ( arr[i]!=mx)
{
    smx=max(smx,arr[i]);   
}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
cout<<" second max number :"<<smx;

    return 0;
}