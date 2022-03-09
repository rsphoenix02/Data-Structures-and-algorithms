void sort012(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {

            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }