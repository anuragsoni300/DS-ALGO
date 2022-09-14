#include <bits/stdc++.h>

using namespace std;

int pallindrome(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int temp = vec[i];
        int sum = 0;
        while (temp > 0)
        {
            int remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp /= 10;
        }
        if (sum != vec[i])
            return 0;
    }
    return 1;
}

int main()
{
    vector<int> vec{111, 222, 333, 444, 555};
    cout << pallindrome(vec) << endl;
    return 0;
}
