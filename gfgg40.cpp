#include<bits/stdc++.h>

bool inSide(int x, int y, int N)
{
    return x >= 0 and x < N and y < N and y >= 0;
}

int minStepToReachTarget(int knightPos[], int targetPos[], int N)
{
    queue<pii> que;
    que.push({knightPos[0] - 1, knightPos[1] - 1});
    int dp[N][N];
    bool visited[N][N];
    fill(dp[0][0], N, N, inf);
    fill(visited[0][0], N, N, false);
    dp[knightPos[0] - 1][knightPos[1] - 1] = 0;
    visited[knightPos[0] - 1][knightPos[1] - 1] = true;
    while (que.size())
    {
        auto front = que.front();
        que.pop();
        int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
        for (int i = 0; i < 8; i++)
        {
            int x = front.first + dx[i], y = front.second + dy[i];
            if (inSide(x, y, N) and !visited[x][y])
            {
                dp[x][y] = dp[front.first][front.second] + 1;
                visited[x][y] = true;
                que.push({x, y});
            }
        }
    }
    return dp[targetPos[0] - 1][targetPos[1] - 1];
}

int main()
{
    int N = 30;
    int knightPos[] = {1, 1};
    int targetPos[] = {30, 30};

    cout << minStepToReachTarget(knightPos, targetPos, N);
}