#include<iostream>
using namespace std;
/*given number n=234
product=2*3*4=24
sum=2+3+4=9
output=product-sum=24-9=15
*/
int main()
{
    int n;
    int prod=1;
    int sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        prod=digit*prod;
        sum=sum+digit;
        n=n/10;
    }
    int ans=prod-sum;
    cout<<ans;
    return 0;
}
