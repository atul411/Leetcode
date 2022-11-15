#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solution(vector<vector<ll>> mat)
{
    int n = mat.size(), m = mat[0].size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                mat[i][j] += mat[i - 1][j];
            }
            else
            {
                mat[i][j] += min(mat[i - 1][j], mat[i - 1][j - 1]);
            }
        }
    }
    ll ans = INT_MAX;
    for (auto num : mat[n - 1])
    {
        ans = min(ans, num);
    }
    return ans;
}

int main()
{
    cout << solution({{3, INT_MAX, INT_MAX, INT_MAX},
                      {6, 4, INT_MAX, INT_MAX},
                      {5, 2, 7, INT_MAX},
                      {9, 1, 8, 6}});
}