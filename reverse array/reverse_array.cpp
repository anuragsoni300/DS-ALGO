#include<bits/stdc++.h>

using namespace std;

#define fo(i,n) for(int i=0;i<n;++i)


void reverse_array(int arr[],int start, int end){
    int temp=0;
    while (start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void print(int arr[],int n){
    int i=0;
    fo(i,n) {cout<<arr[i]<<"  ";}
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr,0,n-1);
    print(arr,n);
}
