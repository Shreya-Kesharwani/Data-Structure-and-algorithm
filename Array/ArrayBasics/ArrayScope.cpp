#include<iostream>
using namespace std;

void update(int arr[],int n){

       cout<<"Inside the function"<<endl;

        //updating array's first element
        arr[0]=120;
        //printing the array
         for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
         }cout<<endl;

         cout<<"Going back to the main function"<<endl;
}
int main()
{
    int arr[3] = {1,2,3};

    update(arr,3);//main ne update function ko apne array ka pehle
    // wale ka address de diya vo update(int arr[]) wale arr[] me store ho gya toh ab
    //jab update wale arr[] me mai koi bhi processing karti hu (processing like add,remove,update) toh vo aap actual array par hi kar rahe ho 
    
    cout<<endl<<"Printing in main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
