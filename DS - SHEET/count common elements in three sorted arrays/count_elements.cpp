#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void count_elements(vector<int> vecA, vector<int> vecB, vector<int> vecC)
{
    unique(vecA.begin(), vecA.end());
    vector<int>::iterator it; //For removing duplicate items from vecA...
    it = unique(vecA.begin(), vecA.end());
    vecA.resize(distance(vecA.begin(), it));
    int sizeB = vecB.size();
    int sizeC = vecC.size();
    int count = 0;
    map<int, int> mapB, mapC;
    f(i, sizeB) mapB[vecB[i]]++;
    f(i, sizeC) mapC[vecC[i]]++;
    f(i, vecA.size())
    {
        if (mapB[vecA[i]] > 0 && mapC[vecA[i]] > 0)
            cout << vecA[i] << endl;
    }
}

int main()
{
    vector<int> vecA{1, 5, 5}, vecB{3, 4, 5, 5, 10}, vecC{5, 5, 10, 20};
    count_elements(vecA, vecB, vecC);
    return 0;
}
