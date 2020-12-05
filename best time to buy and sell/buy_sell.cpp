#include <bits/stdc++.h>

using namespace std;

int buy_sell(int arr[],int size)
{
    int i = size;
    if (i <= 0)
        return 0;
    int profit = 0;
    int curr_profit = 0;
    while (i > 0 && arr[i - 1] < arr[i])
    {
        i--;
    }
    if (i == 0)
    {
        return profit;
    }
    int max = arr[i];
    for (int j = i - 1; j >= 0; j--)
    {
        if ((max - arr[j]) < 0)
            max = arr[j];
        else
        {
            curr_profit = max - arr[j];
            if (curr_profit > profit)
                profit = curr_profit;
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1,2,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << buy_sell(arr,size);
    return 0;
}
