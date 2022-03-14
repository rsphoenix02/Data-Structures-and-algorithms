#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> RightSmaller(int arr[], int n)
{
    vector<int> v;
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            if (!s.empty() && s.top() < arr[i])
            {
                v.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() >= arr[i])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top());
                }
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}

int main()

{
    int n = 6;
    int arr[n] = {1, 5, 0, 3, 4, 5};

    vector<int> ans = RightSmaller(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}