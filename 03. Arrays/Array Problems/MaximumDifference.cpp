#include <iostream>
using namespace std;

int MaxDifference(int arr[], int n)
{
    int maxdiff = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] > arr[i]) && (arr[j] - arr[i] > maxdiff))
            {
                maxdiff = arr[j] - arr[i];
            }
        }
    }
    return maxdiff;
}
int main()

{
    int arr[7] = {2, 3, 10, 6, 4, 8, 1};
    cout << MaxDifference(arr, 7);

    return 0;
}
