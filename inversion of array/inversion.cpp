#include <bits/stdc++.h>

using namespace std;

int merge(int arr[], int temp[], int low, int mid, int high)
{

    int inv_count = 0;
    int i = low;
    int j = mid;
    int m = low;
    while (i <= mid - 1 && j <= high)
    {

        if (arr[i] <= arr[j])
            temp[m++] = arr[i++];
        else
        {
            temp[m++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[m++] = arr[i++];

    while (j <= high)
        temp[m++] = arr[j++];

    for (int i = low; i <= high; i++)
        arr[i] = temp[i];

    return inv_count;
}

int mergeSort(int arr[], int temp[], int low, int high)
{
    int mid;
    int inv_count = 0;
    if (low < high)
    {
        mid = (low + high) / 2;
        inv_count += mergeSort(arr, temp, low, mid);
        inv_count += mergeSort(arr, temp, mid + 1, high);
        inv_count += merge(arr, temp, low, mid + 1, high);
    }
    return inv_count;
}

int __mergeSort(int arr[], int array_size)
{

    int temp[array_size];
    return mergeSort(arr, temp, 0, array_size - 1);
}

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    cout << __mergeSort(arr, size) << endl;
    return 0;
}
