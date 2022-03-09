#include <vector>
#include <iostream>
#include <array>
using namespace std;

void sort012(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{

    int arr[6] = {0, 1, 2, 2, 1, 0};

    sort012(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}