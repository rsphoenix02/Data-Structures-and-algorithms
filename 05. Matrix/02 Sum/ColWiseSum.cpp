#include <iostream>
using namespace std;

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