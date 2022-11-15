#include <bits/stdc++.h>
using namespace std;

class Solution
{
    using vi = vector<int>;
    using vvi = vector<vi>;
    static bool comparator(vi a, vi b)
    {
        return a[1] < b[1];
    }

public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), comparator);
        auto num = intervals[0];
        int ans = -1;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][0] >= num[1])
            {
                num = intervals[i];
            }else{
                ans++;
            }
        }
        return ans;
    }
};