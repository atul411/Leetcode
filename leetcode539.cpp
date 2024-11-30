#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        vector<int> vect;
        for (int i = 0; i < timePoints.size(); i++)
        {
            int b, a = stoi(timePoints[i].substr(3));
            b = stoi(timePoints[i].substr(0, 2)) * 60;
            if (a == 0 and b == 0)
            {
                vect.push_back(24 * 60);
            }
            vect.push_back(a + b);
        }
        sort(vect.begin(), vect.end());
        int ans = INT_MAX;
        for (int i = 1; i < vect.size(); i++)
        {
            ans = min(ans, abs(vect[i] - vect[i - 1]));
        }
        return ans;
    }
};