#include <bits/stdc++.h>
using namespace std;
// It is not giving exact correct output
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {

                    vector<int> temp;
                    temp.push_back(min(arr[i], arr[j]));
                    temp.push_back(max(arr[i], arr[j]));
                    temp.push_back(arr[k]);

                    ans.push_back(temp);
                }
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n, s;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cin >> s;

    vector<vector<int>> final_ans = pairSum(arr, s);
    for (const auto &vec : final_ans)
    {
        for (const auto &num : vec)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}