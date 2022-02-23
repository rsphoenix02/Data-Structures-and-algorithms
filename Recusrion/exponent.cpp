#include <iostream>

using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int y = pow(x, n / 2);
        return y * y;
    }
    else
    {
        return x * pow(x, n - 1);
    }
}
int main()

{
    cout << pow(2, 8);

    return 0;
}
