#include<bits/stdc++.h>
using namespace std;

class Solution
{
    using ll = long long;

public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        int median = n % 2 == 0 ? (nums[n / 2 - 1] + nums[n / 2]) / 2 : nums[n / 2];
        for (auto i : nums)
        {
            ans += abs(i - median);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> v = {-2, 1, -1, -2, -2};
    s.circularArrayLoop(v);
}