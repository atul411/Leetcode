#include<bits/stdc++.h>
using namespace std;
void solution(vi arr)
{
    int n = arr.size();
    pair<int, vi> dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = pair<int, vi>(arr[i], vector<int>({arr[i]}));
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] and dp[j].first + arr[i] > dp[i].first)
            {
                dp[i].first = dp[j].first + arr[i];
                dp[i].second = dp[j].second;
                dp[i].second.push_back(arr[i]);
            }
        }
    }
    int ans = minInteger;
    vi ans1;
    for (auto i : dp)
    {
        if (i.first > ans)
        {
            ans = i.first;
            ans1 = i.second;
        }
    }
    for(auto i:ans1){
        cout<<i<<"\t";
    }
}
int main()
{
    solution({ 3, 2, 6, 4, 5, 1 });
}