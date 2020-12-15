#include <bits/stdc++.h>

using namespace std;

vector<int> temp{};
int n1 = 0;

void merge(vector<int> aa, int n2)
{
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = temp[i];

    for (int j = 0; j < n2; j++)
        R[j] = aa[j];

    int i = 0;
    int j = 0;

    temp.clear();

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            temp.push_back(L[i]);
            i++;
        }
        else
        {
            temp.push_back(R[j]);
            j++;
        }
    }

    while (i < n1)
    {
        temp.push_back(L[i]);
        i++;
    }

    while (j < n2)
    {
        temp.push_back(R[j]);
        j++;
    }
    n1 += n2;
}

void merge(vector<vector<int>> arr, int n)
{
    int i = 0;
    while (i < n)
    {
        merge(arr[i], n);
        i++;
    }
}

int main()
{
    int n = 3;
    //cin>>n;
    vector<vector<int>> arr{{1, 3, 4},
                            {2, 6, 7},
                            {5, 8, 9}};
    // vector<vector<int>> arr(n,vector<int>(n));
    // for(int i=0;i<n;i++)
    // for(int j=0;j<n;j++)
    // cin>>arr[i][j];
    merge(arr, n);
    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << endl;
    return 0;
}
