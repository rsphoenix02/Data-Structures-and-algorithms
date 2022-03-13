#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n, int m)
{
    int s = m + 1;
    int e = n - 1;
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    ReverseArray(arr, 5, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}