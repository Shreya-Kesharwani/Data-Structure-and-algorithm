#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,counter=0;
    cin>>n;
    int j=0,k=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(j<k){
        if(arr[j]==0){
            j++;
        }
        if(arr[k]==1){
            k--;
        }
        if((arr[j]==1) && (arr[k])==0){
            swap(arr[j],arr[k]);
            j++;
            k--;
        }
    }
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n,count=0,counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        count++;
        if(arr[i]==1)
        counter++;
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<count+counter;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
