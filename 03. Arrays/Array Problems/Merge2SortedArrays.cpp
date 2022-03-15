#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(int nums1[], int n, int nums2[], int m)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < n and j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(nums2[j]);
        j++;
    }

    return v;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    vector<int> arr3 = merge(arr1, 5, arr2, 3);

    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}