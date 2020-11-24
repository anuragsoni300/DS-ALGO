#include <bits/stdc++.h>

#define f(i,n) for(int i=0;i<n;++i)

using namespace std;

void sort_012(int arr[], int low, int high)
{
    int mid = 0;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

void print(int arr[],int size){
    f(i,size) cout<<arr[i]<<endl;
}

int main(){
    int arr[]={1,2,1,2,1,2,1,0,0,0,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort_012(arr,0,size-1);
    print(arr,size);
}