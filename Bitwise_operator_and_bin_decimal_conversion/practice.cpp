#include<iostream>
using namespace std;

int main()
{
    /*
    for(int i=0;i<=5;i++){
        cout<<i;//0,2,4
        i++;
    }
    */

/*
   for (int i = 0; i <= 5; i--)
   {
    cout<<i<<" ";//0,0
    i++;
   }
   */
   
   /*
   for (int i = 0; i <= 15; i+=2)
   {
    cout<<i<<" ";//0,3,5,7,9,11,13,15
    if(i&1){
        continue;
    }
    i++;
   }
   */

/*
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= 5; j++)
    {
        cout<<i<<" "<<j<<endl;//0 0 0 1 0 2 0 3 0 4 0 5   10 11 12 13 14 15
    }
    }
    */

/*
for (int i = 0; i < 5; i++)
  {
    for (int j = i; j <= 5; j++)
    {
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;//00 01 02 03 04 05 10 11 12 13 14 15  20 21 22 23 24 25 30 31 32 33 34 35 40 41 42 43 44 45 
            }
    }
*/
  
   
    return 0;
}
