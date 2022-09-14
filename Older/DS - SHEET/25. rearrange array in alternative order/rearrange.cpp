#include <bits/stdc++.h>
using namespace std;
void rearrange(vector<int> vec)
{
    int size = vec.size();
    int i = 0;
    int j = size - 1;
    int k = 0;
    while (i <= j)
    {
        if (vec[i] < 0 && vec[j] >= 0)
        {
            swap(vec[i], vec[j]);
            i++;
            j--;
        }
        else if (vec[i] >= 0)
            i++;
        else if (vec[j] < 0)
            j--;
        for (int i = 0; i < size; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    while (k < size && i < size)
    {
        swap(vec[k], vec[i++]);
        k += 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    rearrange(vec);
    return 0;
}