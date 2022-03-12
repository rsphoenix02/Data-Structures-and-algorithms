#include <iostream>
using namespace std;

bool isPrime(int n) // O(n)
{

    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 11;
    cout << isPrime(n);
    return 0;
}
