#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);
cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"Upper bound->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
  int a=3;
    return 0;
}
