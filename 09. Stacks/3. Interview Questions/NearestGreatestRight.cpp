#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> NearestGreaterRight(int arr[], int n)
{
    // Time Complexity O(n) , Space Complexity O(n)
    vector<int> v;
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else if (!s.empty())
        {
            if (s.top() > arr[i])
            {
                v.push_back(s.top());
            }
            else
            {
                while (s.top() < arr[i] && !s.empty())
                {
                    s.pop();
                }
                if (s.empty())
                {
                    v.push_back(arr[i]);
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
    int n = 4;
    int arr[n] = {1, 3, 2, 4};

    vector<int> ans = NearestGreaterRight(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
