#include <iostream>
using namespace std;

int main()
{

    int i = 10;
    //  Address of Operator
    cout << &i << endl;
    //  Creating Pointer variable storing address of i
    int *p = &i;
    // Printing address of i
    cout << p << endl;
    //  printing value of i using dereferrance operator
    cout << *p << endl;
    // Null Pointer
    int *k = 0;
    return 0;
}