#include<bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> ans;

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        helper(0, candidates, target, vector<int>());
        return ans;
    }

    void helper(int start, vector<int> vect, int target, vector<int> temp)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < vect.size(); i++)
        {
            if (i > start && vect[i] == vect[i - 1])
                continue;
            if (vect[i] > target)
                break;
            temp.push_back(vect[i]);
            helper(i + 1, vect, target - vect[i], temp);
            temp.pop_back();
        }
    }
};