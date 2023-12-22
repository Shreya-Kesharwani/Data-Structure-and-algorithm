#include<iostream>
using namespace std;

int main()
{
    int n,count=0,counter=0;
    cin>>n;
    int i=0,j=0,k=n-1;
    //i->low;
    //j->mid
    //k->high
    int arr[n];
    for(int l=0;l<n;l++){
        cin>>arr[l];
    }
    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
       else if(arr[j]==1){
            j++;
        }
        else if(arr[j]==2){
            swap(arr[j],arr[k]);
            k--;
        }
    }
  for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    return 0;
}
