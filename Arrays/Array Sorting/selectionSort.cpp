#include <iostream>
using namespace std;

int man()
{
    int n;
    cout << "Enter size of array";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] == array[i];
                array[i] == temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    return 0;
}