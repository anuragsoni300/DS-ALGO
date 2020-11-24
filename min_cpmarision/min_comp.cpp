#include <bits/stdc++.h>

using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair getminmax(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;

    if (high == low)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        else
        {
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        return minmax;
    }
    
    int mid = (low+high)/2;
    mml = getminmax(arr,low,mid);
    mmr = getminmax(arr,mid+1,high);

    mml.max>mmr.max ? minmax.max = mml.max : minmax.max = mmr.max;

    mml.min<mmr.min ? minmax.min = mml.min : minmax.min = mmr.min;

    return minmax;
}

int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    struct Pair minmax = getminmax(arr,0,n-1);
    cout<<minmax.max<<endl;
    cout<<minmax.min<<endl;
    return 0;
}
