#include <iostream>

using namespace std;

int insertionSort(int array[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    return -1;
}

void printarray(int array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()

{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Array before sorting" << endl;
    printarray(array, n);
    insertionSort(array, n);
    cout << "Array after sorting" << endl;
    printarray(array, n);

    return 0;
}
