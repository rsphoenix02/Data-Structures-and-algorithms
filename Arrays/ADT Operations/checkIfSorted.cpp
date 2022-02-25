#include <iostream>

using namespace std;

int checkSort(int arr[], int n)
{
    bool sort = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            sort = true;
        }
        else
        {
            sort = false;
            break;
        }
    }
    if (sort == true)
    {
        return 1;
    }
    else
    {
        return -1;
    }
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

    if (checkSort(arr, n) == 1)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }

    return 0;
}
