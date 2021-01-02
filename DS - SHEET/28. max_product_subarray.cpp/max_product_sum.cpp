#include <bits/stdc++.h>

using namespace std;
long long max_product(int vec[], int n)
{
    long long maximum = 1, minimum = 1, product = 1;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] < 0)
            swap(maximum, minimum);
        maximum = max((long long)vec[i], maximum * vec[i]);
        minimum = min((long long)vec[i], minimum * vec[i]);
        if (product < maximum)
            product = maximum;
    }
    return product;
}

int main()
{
    int vec[] = {0, -2, 0};
    int n = sizeof(vec) / sizeof(vec[0]);

    cout << max_product(vec, n) << endl;
    return 0;
}
