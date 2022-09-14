#include <bits/stdc++.h>

using namespace std;

bool search_matrix(vector<vector<int>> matrix, int m, int n, int x)
{
    if (matrix.size() <= 0 || matrix[0].size() <= 0)
        return false;
    int low = 0;
    int high = m - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (x == matrix[mid][n - 1])
            return true;
        if (x <= matrix[mid][n - 1])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low > m - 1)
        return false;
    int temp = low;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (x == matrix[temp][mid])
            return true;
        if (x < matrix[temp][mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == matrix[temp][low])
        return true;

    return false;
}

int main()
{
    vector<vector<int>> vec{};
    bool result = search_matrix(vec, 3, 3, 45);
    if (result == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
