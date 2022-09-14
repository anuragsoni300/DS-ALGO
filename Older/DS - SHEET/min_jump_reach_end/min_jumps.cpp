#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int min_jumps(int arr[], int size)
{
    int jumps[size];
    jumps[0] = 0;

    if (size == 0 || arr[0] == 0)
        return 0;

    for (int i = 1; i <= size; i++)
        jumps[i] = INT_MAX;

    const int m = size; //dont remove const .. otherwise size(m) will be changed by compiler.
    f(i, m)
    {
        int k = i + 1;
        for (int j = 0; j < arr[i]; j++, k++)
        {
            if (j <= size)
                jumps[k] = min(jumps[k], jumps[i] + 1);
        }
    }
    if (jumps[m] == -2147483648 || jumps[m] == 2147483647)
        return -1;
    return jumps[m];
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int static size = sizeof(arr) / sizeof(arr[0]);
    int result = min_jumps(arr, size - 1);
    if (result == -1)
        cout << "CANNOT JUMP" << endl;
    else
        cout << result << endl;
}
