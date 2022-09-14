#include <bits/stdc++.h>

using namespace std;

void spiral_traversal(vector<vector<int>> M, int i, int j, int R, int C)
{
    if (i >= R || j >= C)
        return;
    for (int p = i; p < C; p++)
        cout << M[i][p];
    for (int p = i + 1; p < R; p++)
        cout << M[p][C - 1];
    if ((R - 1) != i)
        for (int p = C - 2; p >= j; p--)
            cout << M[R - 1][p];
    if ((C - 1) != j)
        for (int p = R - 2; p > i; p--)
            cout << M[p][j];
    spiral_traversal(M, i + 1, j + 1, R - 1, C - 1);
}

int main()
{
    vector<vector<int>> M{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> vec;
    int R = 3, C = 3;
    int temp;
    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cin >> temp;
    //         vec.push_back(temp);
    //     }
    //     M.push_back(vec);
    //     vec.clear();
    // }

    spiral_traversal(M, 0, 0, R, C);
    return 0;
}
