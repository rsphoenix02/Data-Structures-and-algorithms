// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        // For every row, run the col
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // When one row is printed we have to print new line
        cout << endl;
    }

    return 0;
}
