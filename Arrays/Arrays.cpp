#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the size of array: ";
    cin >> n;

    int arr[100];
    // Taking array input from user
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << "th element: ";
        cin >> arr[i];
    }
    //  Printing Array Elements2
    for (int i = 0; i < n; i++)
    {
        cout << "The " << i << "th Element value is " << arr[i] << endl;
    }

    return 0;
}