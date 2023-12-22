#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        //rem=0,Not a prime
        if(n%i==0){
            //cout<<"NOt a prime"<<endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"Is a prime number"<<endl;
    }
    return 0;
}
