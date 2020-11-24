#include <bits/stdc++.h>

#define f(i,n) for(int i=0;i<n;++i)

using namespace std;

void move(int arr[], int size)
{
    int low = 0;
    int negative = 0;
    int i = 0;
    while (negative <= size)
    {
        if (arr[negative] < 0)
        {
            swap(arr[low++], arr[negative]);
        }
        negative++;
    }
}

void print(int arr[], int size)
{
    f(i,size) cout<<arr[i]<<endl;
}

int main()
{
    int arr[] = {2, 4, 6, 3, 2, -1, -4, -2, 4, 7, 6, -6, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    move(arr, size - 1);
    print(arr, size);
}
