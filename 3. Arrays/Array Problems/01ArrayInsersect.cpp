#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    // n*m Time Complexity 
    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
