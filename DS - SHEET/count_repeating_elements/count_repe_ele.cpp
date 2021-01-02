#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)
using namespace std;

void count_repe_ele(int arr[], int size)
{
    f(i, size)
    {
        int index = arr[i] % size;
        arr[index] += size;
    }
    f(i, size)
    {
        if (arr[i] / size >= 2)
            cout << i << endl;
    }
}

int main()
{
    int arr[] = {6, 1, 1, 0, 0, 6, 6, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    count_repe_ele(arr, size);
}