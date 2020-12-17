#include <bits/stdc++.h>
using namespace std;

int histo_area(vector<int> vec)
{
    int result = 0;
    int i = 0;
    int max_area = 0;
    int area_until_top = 0;
    stack<int> s;
    while (i < vec.size())
    {
        if (s.empty() || vec[s.top()] <= vec[i])
            s.push(i++);
        else
        {
            int top = s.top();
            s.pop();
            area_until_top = vec[top] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_until_top)
                max_area = area_until_top;
        }
    }
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        area_until_top = vec[top] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_until_top)
            max_area = area_until_top;
    }
    return max_area;
}

void max_area(vector<vector<int>> matrix)
{
    int result = histo_area(matrix[0]);
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j])
                matrix[i][j] += matrix[i - 1][j];
        }
        result = max(result, histo_area(matrix[i]));
    }
    cout << result << endl;
}

int main()
{
    vector<vector<int>> matrix{{0, 1, 1, 0},
                               {1, 1, 1, 1},
                               {1, 1, 1, 1},
                               {1, 1, 0, 0}};
    max_area(matrix);
    return 0;
}
