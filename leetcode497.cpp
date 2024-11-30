#include<bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> arr;
    int size;

public:
    Solution(vector<vector<int>> &rects)
    {
        for (auto i : rects)
        {
            if (isNotLine(i))
            {
                arr.push_back(i);
            }
        }
    }
    bool isNotLine(vector<int> arr)
    {
        return arr[2] - arr[0] >= 1 and arr[3] - arr[1] >= 1;
    }

    vector<int> pick()
    {
        int randomIndex = rand() % size;
        int randDomX = arr[randomIndex][0] + rand() % (arr[randomIndex][2] - arr[randomIndex][0] + 1);
        int randDomy = arr[randomIndex][1] + rand() % (arr[randomIndex][3] - arr[randomIndex][1] + 1);
        return {randDomX, randDomy};
    }
};
