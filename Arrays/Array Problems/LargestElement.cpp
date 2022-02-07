#include <iostream>

using namespace std;

int main()
{

    int arr[100];
    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  Find Largest Element in Array
    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << endl;
    cout << largest << endl;

    //  Find largest Element in Array
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest;
    return 0;
}