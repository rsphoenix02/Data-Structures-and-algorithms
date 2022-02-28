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
//  Row-Wise Sum
void printRowSum(int arr[][3], int row, int col)
{

    cout << "The Row Sum: " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}
//  Column-Wise Sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "The Column Sum: " << endl;
    for (col = 0; col < 3; col++)
    {
        int sum = 0;
        for (row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}
void MaxRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The Maximum Row sum is " << maxi << endl;
    cout << "The Max Row Index is " << rowIndex;
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

    printRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    MaxRowSum(arr, 3, 3);

    return 0;
}
