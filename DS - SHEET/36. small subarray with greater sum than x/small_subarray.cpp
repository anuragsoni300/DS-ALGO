#include <bits/stdc++.h>

using namespace std;

void small_subarray(vector<int> vec, int given_sum)
{
    int curr_sum = 0, start = 0, end = 0, min_length = vec.size() + 1;
    while (end < vec.size())
    {
        while (curr_sum <= given_sum && end < vec.size())
        {
            curr_sum += vec[end++];
        }
        while (curr_sum > given_sum && start < vec.size())
        {
            if (end - start < min_length)
                min_length = end - start;
            curr_sum -= vec[start++];
        }
    }
    (min_length == vec.size() + 1) ? cout << "NOT POSSIBLE" << endl : cout << min_length << endl;   
}

int main()
{
    vector<int> vec{1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int given_sum = 280;
    small_subarray(vec, given_sum);
}
