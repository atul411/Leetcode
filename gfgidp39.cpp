#include<bits/stdc++.h>
using namespace std;
int sollution(vector<int> vect)
{
    int n = vect.size();
    pii dp[n];
    fill_n(dp, n, pii(1,1));
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (vect[j] > vect[i])
            {
                dp[i].first = max(dp[j].first + 1, dp[i].first);
            }else{
                dp[i].second = max(dp[j].second +1, dp[i].second);
            }
        }
    }
    int ans = INT_MIN;
    for(auto i:dp){
        ans = max({ans, i.first, i.second});
    }
    return ans;
}
int main()
{
    cout<<sollution({10, 22, 9, 33, 49, 50, 31, 60});
}