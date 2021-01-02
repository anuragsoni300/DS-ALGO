#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    int index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key >= arr[mid])
            high = mid - 1;
        else
        {
            low = mid + 1;
            if (index == -1 || arr[index] >= arr[mid])
                index = mid;
        }
    }
    return index;
}

void rev(int arr[], int initial, int size)
{
    while (initial < size)
        swap(arr[initial++], arr[size--]);
}

void next_permutation(int arr[], int size)
{
    int i = size - 2;
    while (i >= 0 && arr[i] > arr[i + 1])
        --i;
    if (i <= 0)
    {
        cout << "no permutation possible" << endl;
        exit(0);
    }

    int index = binary_search(arr, i + 1, size - 1, arr[i]);
    swap(arr[index], arr[i]);
    rev(arr, i + 1, size - 1);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[] = {4, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    next_permutation(arr, size);
    print(arr, size);
}
