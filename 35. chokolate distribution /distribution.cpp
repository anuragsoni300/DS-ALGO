#include <bits/stdc++.h>

using namespace std;

void distribution(vector<int> vec, int student_count)
{
    sort(vec.begin(), vec.end());
    int maxx = INT_MAX;
    for (int i = 0; i + student_count - 1 < vec.size(); i++)
    {
        maxx = min(maxx, vec[i + student_count - 1] - vec[i]);
    }
    cout << maxx << endl;
}   

int main()
{
    vector<int> vec{12, 4, 7, 9, 2, 23, 25, 41,
                    30, 40, 28, 42, 30, 44, 48,
                    43, 50};
    int student_count = 7;
    distribution(vec,student_count);
    return 0;
}
