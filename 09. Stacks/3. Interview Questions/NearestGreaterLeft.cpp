#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NearestGreaterLeft(int arr[], int n)
{
    vector<int> v;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            if (!s.empty() and s.top() > arr[i])
            {
                v.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() <= arr[i])
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
    return v;
}
int main()

{
    int n = 4;
    int arr[n] = {1, 3, 2, 4};

    vector<int> ans = NearestGreaterLeft(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
