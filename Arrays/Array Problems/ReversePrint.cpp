#include <iostream>
using namespace std;
int main()
{

    int n;

    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Original Array Left->right
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    //  Reverse Array Right->left
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}