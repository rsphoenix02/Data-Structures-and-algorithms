#include <bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int> arr, int n)
{

    vector<int> v1;
    stack<pair<int, int>> left1;

    for (int i = 0; i < n; i++)
    {
        int PsuedoIndex = -1;
        if (left1.empty())
        {
            v1.push_back(PsuedoIndex);
        }
        else
        {
            if (!left1.empty() && left1.top().first < arr[i])
            {
                v1.push_back(left1.top().second);
            }
            else
            {
                while (!left1.empty() && left1.top().first >= arr[i])
                {
                    left1.pop();
                }
                if (left1.empty())
                {
                    v1.push_back(PsuedoIndex);
                }
                else
                {
                    v1.push_back(left1.top().second);
                }
            }
        }
        left1.push({arr[i], i});
    }
    return v1;
}

vector<int> NSR(vector<int> arr, int n)
{
    vector<int> v1;
    stack<pair<int, int>> right;

    for (int i = n - 1; i >= 0; i--)
    {
        int PsuedoIndex = n;
        if (right.empty())
        {
            v1.push_back(PsuedoIndex);
        }
        else
        {
            if (!right.empty() && right.top().first < arr[i])
            {
                v1.push_back(right.top().second);
            }
            else
            {
                while (!right.empty() && right.top().first >= arr[i])
                {
                    right.pop();
                }
                if (right.empty())
                {
                    v1.push_back(PsuedoIndex);
                }
                else
                {
                    v1.push_back(right.top().second);
                }
            }
        }
        right.push({arr[i], i});
    }
    reverse(v1.begin(), v1.end());
    return v1;
}

int MAH(vector<int> arr)
{ // We have to find NSL and NSR first
    int n = arr.size();
    vector<int> left = NSL(arr, n);
    vector<int> right = NSR(arr, n);

    vector<int> width;
    for (int i = 0; i < n; i++)
    {
        // width = left-right-1
        width.push_back(right[i] - left[i] - 1);
    }

    for (int i = 0; i < n; i++)
    {
        // Area = width*arr
        width[i] = width[i] * arr[i];
    }

    int ans = INT_MIN;
    // Finding Max in area array
    for (int i = 0; i < n; i++)
    {
        if (width[i] > ans)
        {
            ans = width[i];
        }
    }
    return ans;
}

int maxArea(int arr[][], int n, int m)
{
    vector<int> v;
    for (int j = 0; j < m; j++)
    {
        v.push_back(arr[0][j]);
    }

    int Mx = MAH(v);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                v[j] = 0;
            }
            else
            {
                v[j] = v[j] + arr[i][j];
            }
        }
        Mx = max(Mx, MAH(v));
    }
    return Mx;
}

int main()
{

    int n, m;

    cin >> n >> m;
    int M[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }
    cout << maxArea(M, n, m) << endl;
}