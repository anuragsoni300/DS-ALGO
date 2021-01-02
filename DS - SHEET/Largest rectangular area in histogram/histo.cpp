#include <bits/stdc++.h>

using namespace std;

int histo(vector<int> vec)
{
    int i = 0;
    int max_area = 0;
    int area_until_top;
    int top;
    stack<int> s;
    while (i < vec.size())
    {
        if (s.empty() || vec[s.top()] <= vec[i])
            s.push(i++);
        else
        {
            top = s.top();
            s.pop();
            area_until_top = vec[top] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_until_top)
                max_area = area_until_top;
        }
    }
    while (!s.empty())
    {
        top = s.top();
        s.pop();
        area_until_top = vec[top] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_until_top)
            max_area = area_until_top;
    }
    return max_area;
}

int main()
{
    vector<int> vec{6, 2, 5, 4, 5, 1, 6};
    cout << histo(vec) << endl;
}
