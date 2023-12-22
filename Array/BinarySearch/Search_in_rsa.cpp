//Search in Rotated Sorted Array

#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<e){
    if(arr[m]>=arr[0]){
     s=m+1;
    }
    else{
        e=m;
    }
    m=s+(e-s)/2;
}
return s;
}
int binarySearch(int arr[],int start,int end,int key){
    int s=start;
    int e=end;
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

int findPosition(int arr[],int n,int k){
    int pivot = getPivot( arr, n);
    if(k>=arr[pivot]  &&  k<=arr[n-1]){
         return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
     cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<findPosition( arr, n, key);
    return 0;
}

