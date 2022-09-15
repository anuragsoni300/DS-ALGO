#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col = 4, row = 4;
    for (int i = 0; i < 2 * row; i++)
    {
        for (int j = 0; j < 2 * col; j++)
        {
            if (i < row)
            {
                if (i >= j || 2 * col - j - 1 <= i)
                    cout << "+ ";
                else
                    cout << "  ";
            }
            else
            {
                if (abs(i - row) <= col - j - 1 || 2 * col - j <= 2 * row - i)
                    cout << "+ ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}