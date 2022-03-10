#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i] * (n - i) * (i + 1);
    }

    return total;
}
int main()

{
    int arr[5] = {1, 2, 0, 7, 2};
    cout << sum(arr, 5);

    return 0;
}
