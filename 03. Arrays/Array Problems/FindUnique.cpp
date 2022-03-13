#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // Using XOR Operator to find unique
        ans = ans ^ arr[i];
    }
    return ans;
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

    cout << findUnique(arr, n);

    return 0;
}
