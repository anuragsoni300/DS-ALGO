#include <bits/stdc++.h>

#define f(i, n) for (int i = 0; i <= n; i++)

using namespace std;

void print(int vect[], int size);

void intersection(int arr1[], int arr2[], int high1, int high2)
{
    cout << "INTERSECTION" << endl;
    int low1 = 0;
    int low2 = 0;
    int i = 0;
    int vect[high1 + high2];
    while (low1 <= high1 && low2 <= high2)
    {
        if (arr1[low1] < arr2[low2])
        {
            low1++;
        }
        else if (arr1[low1] > arr2[low2])
        {
            low2++;
        }
        else
        {
            vect[i++] = arr1[low1++];
            low2++;
        }
    }
    print(vect, i - 1);
}

void union__(int arr1[], int arr2[], int high1, int high2)
{
    cout << "UNION" << endl;
    int low1 = 0;
    int low2 = 0;
    int i = 0;
    int vect[high1 + high2];

    while (low1 <= high1 && low2 <= high2)
    {
        if (arr1[low1] < arr2[low2])
        {
            vect[i++] = arr1[low1++];
        }
        else if (arr1[low1] > arr2[low2])
        {
            vect[i++] = arr2[low2++];
        }
        else
        {
            vect[i++] = arr1[low1++];
            low2++;
        }
    }

    while (low1 <= high1)
    {
        vect[i++] = arr1[low1++];
    }
    while (low2 <= high2)
    {
        vect[i++] = arr2[low2++];
    }
    print(vect, i - 1);
}

void print(int vect[], int size)
{
    f(i, size) cout << vect[i] << endl;
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6, 7};
    int arr2[] = {2, 3, 5, 8};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    union__(arr1, arr2, m - 1, n - 1);
    intersection(arr1, arr2, m - 1, n - 1);
}
