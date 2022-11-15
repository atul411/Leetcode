#include "library.h"

bool solution(vi vect, int x, vi a, vi b)
{
    if (x == vect.size())
    {
        return vectorSum(a) == vectorSum(b);
    }
    vi temp1 = a, temp2 = b;
    temp1.push_back(vect[x]);
    auto t1 = solution(vect, x + 1, temp1, temp2);
    temp1.pop_back();
    temp2.push_back(vect[x]);
    auto t2 = solution(vect, x + 1, temp1, temp2);
    return t1 or t2;
}

bool solution2(vi vect, int n, int sum)
{
    if (sum == 0)
    {
        return true;
    }
    if (n < 0)
    {
        return false;
    }
    auto t = solution2(vect, n - 1, sum);
    return sum >= vect[n] ? solution2(vect, n - 1, sum - vect[n]) or t : t;
}

bool solutionUsingDp(vi arr, int n, int sum)
{
    int dp[n + 1][sum + 1];
    fill(dp[0][0], n + 1, sum + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] >= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] or dp[i - 1][j];
            }
            dp[i][j] = dp[i][j] or dp[i - 1][j];
        }
    }
    int i = n, j = sum;
    if (dp[i][j] == false)
        return false;
    vi a, b;
    while (i > 0 and j >= 0)
    {
        if (dp[i][j] == dp[i - 1][j])
        {
            a.push_back(arr[i - 1]);
            i--;
        }
        else
        {
            b.push_back(arr[i - 1]);
            j -= arr[i - 1];
            i--;
        }
    }
    for(auto i: a){
        cout<<i<<"\t";
    }
    cout<<endl;
    for(auto i: b){
        cout<<i<<"\t";
    }
    return true;
}

int main()
{
    // cout << solution({1, 5, 11, 5}, 0, vi(0), vi(0)) << endl;
    int sm = vectorSum(vi({1, 5, 11, 5})) / 2;
    solutionUsingDp({1, 5, 11, 5}, 4, sm);
}