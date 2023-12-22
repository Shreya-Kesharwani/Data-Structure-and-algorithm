#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int arr[100];
    int start=0;
    int end = size-1;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    /********My Approach
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
        
    }*/

    //love babbar approach
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
