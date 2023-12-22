#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]<key){
              s=m+1;
        }
        else if(arr[m]>key){
              e=m-1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
int m= binarySearch(even,6,11);
 int n=binarySearch(odd,5,12);
 cout<<m<<endl<<n;
        return 0;
}