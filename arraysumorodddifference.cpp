#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sumeven=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
     int sumodd=0; 
for (int i = 0; i < 10; i++)                                                                                      
{
     if (i%2==0)
     {
        sumeven +=arr[i];
     }
     else 
     sumodd +=arr[i];
}
cout<<"sum of all even no:"<<sumeven<<endl;
cout<<"sum of all odd no:"<<sumodd;
    return 0;
}