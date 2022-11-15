#include "library.h"

ll solution(vi primes, int n)
{
    ll dp[n];
    dp[0] = 1;
    int len = primes.size();
    vi arr(len, 0);
    for (int i = 1; i < n; i++)
    {
        int x = iinf, index = -1;
        for (int j = 0; j < len; j++)
        {
            if (primes[j] * dp[arr[j]] < x)
            {
                x = primes[j] * dp[arr[j]];
                index = j;
            }
        }
        dp[i] = x;
        arr[index]++;
    }
    return dp[n-1];
}

int main()
{
    cout<<solution({3, 5, 7, 11, 13}, 9);
}