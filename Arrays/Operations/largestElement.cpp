#include <iostream>

using namespace std;

int largest(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return arr[res];
}
int main()

{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // Prints largest element
    cout << largest(array, n);

    return 0;
}
