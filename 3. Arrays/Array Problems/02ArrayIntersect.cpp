#include <iostream>
#include <vector>
using namespace std;

vector<int> insersection(int arr1[], int arr2[], int n, int m)
{
    // Time Complexity n*m
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m - 1; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(arr2[j]);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> arr3;
    arr3 = insersection(arr1, arr2, n, m);
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i];
    }

    return 0;
}
