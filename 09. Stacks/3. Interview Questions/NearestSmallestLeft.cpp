#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> leftSmaller(int arr[], int n)
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
            if (!s.empty() && s.top() < arr[i])
            {
                v.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() > arr[i])
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
    int n = 6;
    int arr[n] = {1, 5, 0, 3, 4, 5};

    vector<int> ans = leftSmaller(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
