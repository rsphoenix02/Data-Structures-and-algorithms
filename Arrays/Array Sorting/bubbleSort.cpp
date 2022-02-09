#include <iostream>
#include <climits>
using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int n)
{
    bool changed = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                changed = true;
            }
            if (changed == false)
            {
                break;
            }
        }
    }
}

int main()

{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bubbleSort(array, n);
    printArray(array, n);

    return 0;
}
