#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int x, int y)
{
    int dp[x + 1];
    for (int i = 0; i <= x; i++)
    {
        arr[i] < arr[y] ? dp[i] = arr[i] : dp[i] = 0;
    }
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] and dp[j] + arr[i] > dp[i] and arr[i] < arr[y])
            {
                dp[i] = dp[j] + arr[i];
            }
        }
    }
    int ans = INT_MIN;
    for (auto num : dp)
    {
        // cout << num << "\t";
        ans = max(ans, num + arr[y]);
    }
    return ans;
}

int gcd(int a, int b){
    if(a==1)
        return b;
    else gcd()
}

int main()
{
    
    cout << solution({1, 101, 2, 3, 100, 4, 5}, 4, 6);
}