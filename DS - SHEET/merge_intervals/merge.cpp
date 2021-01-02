#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)
using namespace std;

struct Merge
{
    int start;
    int end;
};

bool compare(Merge i1, Merge i2)
{
    return (i1.start < i2.start);
}

void merge_intervals(Merge intervals[], int size)
{
    if (size == 0)
        return;
    sort(intervals, intervals + size, compare);
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (intervals[index].end >= intervals[i].start)
        {
            intervals[index].start = min(intervals[i].start, intervals[index].start);
            intervals[index].end = max(intervals[i].end, intervals[index].end);
        }
        else
        {
            index++;
            intervals[index] = intervals[i];
        }
    }
    for (int i = 0; i <= index; i++)
        cout << intervals[i].start << " " << intervals[i].end << endl;
}

int main()
{
    Merge intervals[] = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    int size = sizeof(intervals) / sizeof(intervals[0]);
    merge_intervals(intervals, size);
}
