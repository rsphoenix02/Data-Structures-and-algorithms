#include <vector>
#include <iostream>
using namespace std;

int maximumDifference(int arr[], int n)
{
    int maxDiff = -1;
    int minElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - minElement > maxDiff && minElement != arr[i])
        {
            maxDiff = arr[i] - minElement;
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    return maxDiff;
}

int main()
{

    int arr[5] = {2, 4, 6, 9, 15};

    cout << maximumDifference(arr, 5);
    return 0;
}