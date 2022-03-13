#include <iostream>

using namespace std;

// Linear Search
bool isFound(int arr[][3], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()

{

    int arr[3][3];

    //  Taking Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // // Printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    if (isFound(arr, target) == true)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
