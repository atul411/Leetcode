#include<bits/stdc++.h>
using namespace std;

void solution(vector<pii> arr)
{
    int n = arr.size();
    int dp[n];
    fill_n(dp, n, 1);
    sort(arr.begin(), arr.end(), [](pii a, pii b)
         { return a.first < b.first; });

    vector<vector<pii>> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        pii a = make_pair(arr[i].first, arr[i].second);
        vector<pii> ab;
        ab.push_back(a);
        temp.push_back(ab);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i].first > arr[j].second and dp[i] < dp[j] + 1)
            {
                temp[i].clear();
                pii a = make_pair(arr[i].first, arr[i].second);
                temp[i].push_back(a);
                for (auto x : temp[j])
                {
                    pii a = make_pair(x.first, x.second);
                    temp[i].emplace_back(x);
                }
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = 0, maxLen = dp[0];
    for (int i = 0; i < n; i++)
    {
        if (maxLen < dp[i])
        {
            maxLen = dp[i];
            ans = i;
        }
    }
    for (auto pr : temp[ans])
    {
        cout << "{ " << pr.first << " , " << pr.second << "}, ";
    }
}

int main()
{
    solution({{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90}});
}