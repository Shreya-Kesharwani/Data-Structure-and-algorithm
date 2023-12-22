#include <iostream>
using namespace std;
int peakIndexMountainArray(int arr[], int n)
{

    int s = 0;

    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << peakIndexMountainArray(arr, n);
    return 0;
}
