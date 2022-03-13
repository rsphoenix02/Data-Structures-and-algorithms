#include <iostream>

using namespace std;

int main()

{
    int n;
    cin >> n;

    int arr[n];

    int count = 1;
    int start = 0;
    int end = n - 1;

    while (count <= n)
    {
        arr[start] = count;
        arr[end] = count + 1;

        start++;
        end--;
        count = count + 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
