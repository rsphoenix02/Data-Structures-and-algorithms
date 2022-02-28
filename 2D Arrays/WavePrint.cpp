#include <iostream>
#include <vector>
using namespace std;

void wavePrint(int arr[4][4], int nRows, int mCols)
{
    for (int col = 0; col < mCols; col++)
    {
        // If column index is odd
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        //  If column index is even
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main()
{

    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The normal array: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << " Wave Array: " << endl;
    wavePrint(arr, 4, 4);
    return 0;
}
