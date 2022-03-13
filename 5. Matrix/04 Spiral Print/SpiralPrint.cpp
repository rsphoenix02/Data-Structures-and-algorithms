#include <iostream>
using namespace std;

void spiral(int arr[][4], int rows, int cols)
{
    int row_start = 0;
    int row_end = rows - 1;
    int col_start = 0;
    int col_end = cols - 1;

    while (row_start <= row_end and col_start <= col_end)
    {
        // For row start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // For column end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // For row end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;
        // For column start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
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

    cout << "Spiral Print: " << endl;
    spiral(arr, 4, 4);
    return 0;
}
