 #include<iostream>
 using namespace std;
 //code is wrong
 /*find number of 1's in binary number
 i/p=101
 o/p=2
 */
 int main()
 {
    int n;
    int count=0;
    cout<<"Enter a binary number";
    cin>>n;
    while(n!=0){
        //checking last bit
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
 }
 