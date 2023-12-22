#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int m=0;
    cin>>n;
    for(int i=0;i<30;i++){
        int ans=pow(2,i);
        if(ans==n){
            cout<<"true";
            m=1;
            break;
        }
    }
    if(m==0){
        cout<<"False";
    }
    return 0;
}
