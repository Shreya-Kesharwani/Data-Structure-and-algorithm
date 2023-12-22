#include <bits/stdc++.h>
using namespace std;
// given : arays are in sorted order;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        
         if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for (int x : ans)
        cout << x << " ";
}


int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> brr;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        brr.push_back(x);
    }

    findArrayIntersection(arr, n, brr, m);

    return 0;
}

/************My approach**************
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[100];
    int brr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
                brr[j]=INT32_MIN;
                break;
            }
        }
    }
    return 0;
}
*/
