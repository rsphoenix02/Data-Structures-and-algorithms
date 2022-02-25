#include <iostream>

using namespace std;

void deletion(int arr[], int n, int ele)
{

    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            break;
        }
    }

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    for (int k = 0; k < n - 1; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30};
    int ele = 20;
    int n = 6;

    deletion(arr, n, ele);

    return 0;
}
