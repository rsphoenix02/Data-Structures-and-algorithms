#include <iostream>

using namespace std;

void insertion(int array[], int n, int x, int pos)
{
    // Time Complexity O(n)
    int index = pos - 1;

    for (int i = n - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }

    array[index] = x;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()

{
    int n = 5;
    int arr[5] = {10, 20, 40, 50};
    insertion(arr, n, 30, 3);

    return 0;
}
