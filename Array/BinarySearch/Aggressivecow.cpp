#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int mid){
int cowCount=1;
int lastPos=stalls[0];
for(int i=0; i<stalls.size();i++){
    if(stalls[i]-lastPos>=mid){
cowCount++;
if(cowCount==k){
    return true;
}
lastPos=stalls[i];
    }
}
return false;
}
int aggressiveCows(vector<int> &stalls,int k){
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    int no_of_students;
    cin>>no_of_students;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
     cout<<aggressiveCows(vec,no_of_students);
    return 0;
}
