#include <iostream>

using namespace std;

int MaxPrefix(int arr[], int q)
{
    int max = 0;
    for (int i = 0; i < q; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()

{
    int arr[5] = {10, 20, 25, 40, 1};
    cout << MaxPrefix(arr, 3);

    return 0;
}
