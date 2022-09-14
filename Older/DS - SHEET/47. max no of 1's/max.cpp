#include <bits/stdc++.h>

using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int found = -1;
    int max_row = -1;
    int row = -1;
    int max = INT_MAX;  
    vector<int>::iterator temp;
    for (int i = 0; i < n; i++)
    {
        temp = upper_bound(arr[i].begin(), arr[i].end(), 0);
        row = temp - arr[i].begin();
        if (row < m)
        {
            found = 0;
        }
        if (row < max)
        {
            max = row;
            max_row = i;
        }
    }
    if (found == -1)
        return -1;
    return max_row;
}

int main()
{
    vector<vector<int>> vec{{0, 0, 0}, {0, 0, 1}, {1, 1, 1}};
    cout << rowWithMax1s(vec, 3, 3) << endl;
    return 0;
}