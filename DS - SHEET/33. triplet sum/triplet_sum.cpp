#include <bits/stdc++.h>
using namespace std;

bool triplet_sum(vector<int> vec, int sum)
{
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        int low = vec[i];
        int high = vec.size() - 1;
        int index = i + 1;
        while (index < high)
        {

            int temp = vec[index] + low + vec[high];
            if (temp > sum)
            {
                high--;
            }

            else if (temp < sum)
            {
                index++;
            }
            else if (temp == sum)
            {
                cout << low << " " << vec[index] << " " << vec[high] << endl;
                return true;
                exit(0);
            }
        }
    }

    return false;
}

int main()
{
    vector<int> vec{557, 217, 627, 358, 527, 358, 338, 272, 870, 362, 897, 23, 618, 113, 718, 697, 586, 42, 424, 130, 230, 566, 560, 933};
    int sum = 986;
    if (!triplet_sum(vec, sum))
        cout << "0" << endl;
    return 0;
}
