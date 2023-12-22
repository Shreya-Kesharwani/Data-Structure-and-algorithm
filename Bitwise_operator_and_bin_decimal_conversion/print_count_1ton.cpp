#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"printing count from 1 to n"<<endl;
    int i=1;
    for( ; ; ){
        if(i<=n){
            cout<<i<<endl;
        i++;
        }
        
    }
    return 0;
}
