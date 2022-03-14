#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> StockSpan(int arr[], int n)
{
    vector<int> v;
    // First int store NGL and second store NGL index
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            if (!s.empty() && s.top().first > arr[i])
            {
                v.push_back(s.top().second);
            }
            else
            {
                while (!s.empty() && s.top().first < arr[i])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top().second);
                }
            }
        }
        s.push({arr[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = i - v[i];
    }
    return v;
}
int main()
{
    int n = 7;
    int arr[n] = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans = StockSpan(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
