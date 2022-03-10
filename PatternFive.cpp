#include <iostream>
using namespace std;
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
int main()
{
    int n = 5;
    for (int i = 0; i < n * 2; i++)
    {
        // if (i > n) then totalCols = 2*n-i else totalCols = i
        int totalCols = i > n ? 2 * n - i : i;
        for (int j = 0; j < totalCols; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
