#include<iostream>
using namespace std;
int findUnique(int *arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       int b= findUnique(arr,n);
        cout<<b;
    }
    return 0;
}
