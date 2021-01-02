#include <bits/stdc++.h>

using namespace std;

void conti_large_sum(int arr[], int size)
{
    int i = 0;
    int sum = 0;
    int max = INT_MIN;
    while (i <= size)
    {
        sum += arr[i++];
        if (max < sum)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << max << endl;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    conti_large_sum(arr, size - 1);
}
