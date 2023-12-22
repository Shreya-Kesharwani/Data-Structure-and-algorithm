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
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<getPivot( arr, n);
    return 0;
}
