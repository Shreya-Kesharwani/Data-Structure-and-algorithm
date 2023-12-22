#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum=0;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter elements of an array"<<endl;
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements of an array is "<<sum<<endl;
    return 0;
}
