//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
// * * *
//  * *
//   *

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i < n * 2; i++)
    {
        int totalCol = i > n ? n * 2 - i : i;
        int totalSpaces = n - totalCol;
        for (int k = 1; k <= totalSpaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= totalCol; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
