#include<iostream>
using namespace std;
int find_first_pos(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
         ans=mid;
         end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int find_last_pos(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
         ans=mid;
         start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=find_first_pos(arr,n,key);
    int y=find_last_pos(arr,n,key);
    int z=y-x+1;
    cout<<z;
    //cout<<x<<" "<<y;
    return 0;
}





/*************My approach************/
/*#include<iostream>
using namespace std;
int find_first_pos(int arr[],int n,int key){
       for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break;
        }
       }
       return -1;
}

int find_last_pos(int arr[],int n,int key){
       for(int i=n-1;i>=0;i--){
        if(arr[i]==key){
            return i;
            break;
        }
       }
       return -1;
}
int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=find_first_pos(arr,n,key);
    int y=find_last_pos(arr,n,key);
    cout<<x<<" "<<y;
    return 0;
}*/
