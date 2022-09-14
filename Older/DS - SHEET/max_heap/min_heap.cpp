#include <bits/stdc++.h>

#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> mix_heap;
    int i;
    int n, k;
    int temp;
    cout << "ENTER AMOUNT";
    cin >> n;
    cout << "ENTER Kth QUERY";
    cin >> k;
    f(i, n)
    {
        cin >> temp;
        mix_heap.push(temp);
    }
    i = 0;
    f(i, k-1)
    {
        mix_heap.pop();   
    }
    cout << endl
         << mix_heap.top() << endl;
}
