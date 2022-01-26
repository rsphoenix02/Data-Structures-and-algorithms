#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    //  Before Swap
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    //  After Swap
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    return 0;
}