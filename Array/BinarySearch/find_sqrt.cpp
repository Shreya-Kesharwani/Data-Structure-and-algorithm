// find integer value of square root of a given number through binary search

#include <iostream>
#include <cmath>
using namespace std;
long long int sqrtInteger(int key)
{
    int s = 0;
    int e = key;
    long long int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (m * m < key)
        {
            ans = m;
            s = m + 1;
        }
        else if (m * m == key)
        {
            return m;
        }
        else if (m * m > key)
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSolution)
{
    double factor = 1;
    double ans = tempSolution;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int tempSolution = sqrtInteger(n);
    cout << "Answer is " << morePrecision(n, 3, tempSolution);
    return 0;
}
