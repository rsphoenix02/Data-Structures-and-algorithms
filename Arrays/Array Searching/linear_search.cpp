//  Linear Search is a method for finding an element within a list.
// It sequentially checks each element of the list until a match is found or
// the whole list has been searched.

//  Note - It search each element one by one starting from index[0] to index[n]
#include <iostream>
using namespace std;

int linear_search(int array[], int n, int x)
{

    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int main()
{
    int array[] = {2, 4, 0, 1, 9};
    int x;
    cout << "Enter variable to find: ";
    cin >> x;
    int n = sizeof(array) / sizeof(array[0]);

    int result = linear_search(array, n, x);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result;
    }
    return 0;
}
