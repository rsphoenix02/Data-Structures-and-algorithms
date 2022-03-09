#include <iostream>
using namespace std;

void moveZeros(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[count]);
            count++;
        }
    }
}

int main()

{

    int arr[6] = {1, 0, 0, 5, 0, 3};
    moveZeros(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
