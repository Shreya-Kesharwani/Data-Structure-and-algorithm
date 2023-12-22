#include <iostream>
using namespace std;

// Finding maximum and minimum 
//element of an array

int getMax(int num[],int n){
    int maxi = INT32_MIN;
    for(int i=0;i<n;i++){
maxi=max(maxi,num[i]);
        //int max = INT32_MIN;
        //if(num[i]>max){
        // max=num[i];
        //}
    }
    return maxi;
    
}

int getMin(int num[],int n){
    int mini = INT32_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
        /*
        int min = INT32_MAX;
        if(num[i]<min){
         min=num[i];
        }*/
    }
    return mini;
    
}
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    
    
    int num[100];
    cout<<"Enter elements of an array"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum element is "<<getMax(num,size)<<endl;

     cout<<"Minimum element is "<<getMin(num,size)<<endl;
    return 0;
}
