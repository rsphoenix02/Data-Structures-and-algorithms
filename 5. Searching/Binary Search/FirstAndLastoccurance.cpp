#include <iostream>
#include <vector>
using namespace std;

int FirstOccurrence(vector<int> arr, int n, int ele)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int LastOccurrence(vector<int> arr, int n, int ele)
{
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = FirstOccurrence(arr, n, k);
    p.second = LastOccurrence(arr, n, k);

    return p;
}

int main()
{

    int n = 6;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(6);
    arr.push_back(6);

    pair<int, int> ans = firstAndLastPosition(arr, arr.size(), 6);
    cout << ans.first << " " << ans.second;
    return 0;
}