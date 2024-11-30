#include<bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &primes)
    {
        int dp[n];
        dp[0] = 1;
        int primecount = primes.size();
        int primesIndices[primecount];
        fill_n(primesIndices, primecount, 0);
        for (int i = 1; i < n; i++)
        {
            ll mn = INT_MAX;
            for (int j = 0; j < primecount; j++)
            {
                mn = min(mn, (ll)dp[primesIndices[j]] * primes[j]);
            }
            for (int j = 0; j < primecount; j++)
            {
                if (mn == (ll)dp[primesIndices[j]] * primes[j])
                {
                    primesIndices[j]++;
                }
            }
            dp[i] = mn;
        }
        return dp[n - 1];
    }
};