#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void print(int arr[], int size)
{
    f(i, size) cout << arr[i] << endl;
}

void rotate(int arr[], int size)
{
    int i = 0;
    int temp = arr[0];
    while (i < size)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[i] = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6,67,4,3,23};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, size - 1);
    print(arr, size);
}
