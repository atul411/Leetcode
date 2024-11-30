#include<bits/stdc++.h>
using namespace std;
int solution(int n, int k)
{
    if (k == 0 or k == 1)
    {
        return k;
    }
    if (n == 1)
        return k;
    int ans = INT_MAX;
    for (int x = 1; x <= k; x++)
    {
        int res = max(solution(n - 1, x - 1), solution(n, k - x));
        if (res < ans)
        {
            ans = res;
        }
    }
    return ans + 1;
}
int solutionDp(int n, int k){
    int dp[n+1][k+1];
    fill(dp[0][0], n+1, k+1, 0);
}
int main()
{
    cout << solution(2, 10);
}