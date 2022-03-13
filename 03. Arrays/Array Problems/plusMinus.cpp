#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive = positive + 1;
        }
        else if (arr[i] < 0)
        {
            negative = negative + 1;
        }
        else
        {
            zero = zero + 1;
        }
    }
    cout << (float)positive / n << endl;
    cout << (float)negative / n << endl;
    cout << (float)zero / n;

    return 0;
}
