#include<bits/stdc++.h>

const int INF = 1e9;
bool solution(vvi matrix)
{
    int v = matrix.size();
    int dp[v][v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            dp[i][j] = matrix[i][j];
        }
    }

    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dp[i][j] > dp[i][k] + dp[k][j])
                    dp[i][j] = dp[i][k] + dp[k][j];
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        if (dp[i][i] < 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vvi matrix = {{0, 1, INF, INF},
                  {INF, 0, -1, INF},
                  {INF, INF, 0, -1},
                  {-1, INF, INF, 0}};
    cout << solution(matrix);
}