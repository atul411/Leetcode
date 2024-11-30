#include<bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

struct comprator
{
    bool operator()(pii a, pii b) const
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        priority_queue<pii, vector<pii>, comprator> pq;
        for (int i = 0; i < arr.size(); i++)
        {
            pq.emplace(arr[i], abs(arr[i] - x));
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while (pq.size())
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};