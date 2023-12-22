#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing DONE" << endl;
}
int main()
{
    int number[15];
    cout << "Value at 14 index " << number[14] << endl
         << endl;

    int second[3] = {5, 7, 11};
    cout << "Value at 2 index " << second[2] << endl<<endl;

    int third[15] = {2, 7};
    int n = 15;
   // printArray(third,15);
    //cout<< endl;

    int fourth[10] = {0};
    n = 10;
    /*cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }*/
    //printArray(fourth,10);
    //cout << endl;

    int fifth[10] = {1};
    n = 10;
    //printArray(fifth,10);
    //int fifthsize=sizeof(fifth)/sizeof(int);
    //cout<<"Size of fifth is "<<fifthsize;
    

    char ch[5]={'a','b','c','d','e'};
    cout << "printing the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout<<"printing done"<<endl;

    double firstDouble[5];
    float firstfloat[6];
    bool firstBool[9];
    
    cout << endl
         << "Everything is fine" << endl
         << endl;

    return 0;
}
