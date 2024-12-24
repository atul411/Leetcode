#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pii> pq;
        int n = nums.size(), size = n - k + 1, curr = 0;
        vector<int> ans(size);
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
            if (pq.size() >= k) {
                ans[curr++] = pq.top().first;
            }
            while (pq.size() >= k and i - pq.top().second + 1 >= k) {
                pq.pop();
            }
        }
        return ans;
    }
};