#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += n * n - 1;
    }
    cout << sum;
    return 0;
}
