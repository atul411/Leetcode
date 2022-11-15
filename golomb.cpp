#include <bits/stdc++.h>
using namespace std;

void golomb(int n)
{
    vector<int>dp(3);
    unordered_map<int, int> umap;
    umap[0] = 0;
    umap[1] = 1;
    umap[2] = 1;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    int i = 2;
    while (dp.size()<n){
        int x = dp[i]-umap[i];
        umap[i] += x;
        while (x--)
        {
            dp.push_back(i);
        }
        i++;  
    }

    for(auto i: dp){
        cout<<i<<endl;
    }
}

int main()
{
    golomb(100);
}