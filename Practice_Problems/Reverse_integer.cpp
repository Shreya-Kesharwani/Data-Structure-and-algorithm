#include<iostream>
using namespace std;

int main()
{
    int n;
    int ans=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (n!=0)
    {
       int digit =n%10;
       if((ans>INT16_MAX/10)||(ans<INT16_MIN/10)){
        ans=0;
        break;
        }
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
    
    return 0;
}
