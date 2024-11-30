#include<bits/stdc++.h>
using namespace std;
int dp[10][10][10][10][10];
int solution(int lastX, int lastY, int currX, int currY, int k, int n, int m)
{
    if (currX >= n or currY >= m)
        return 0;
    if (currX == n - 1 and currY == m - 1)
    {
        if (k >= 0)
        {
            return 1;
        }
    }
    if (k < 0)
        return 0;
    if (dp[lastX][lastY][currX][currY][k] != -1)
    {
        return dp[lastX][lastY][currX][currY][k];
    }
    if (lastX == currX and lastY + 1 == currY)
    {
        dp[lastX][lastY][currX][currY][k] = solution(currX, currY, currX, currY + 1, k, n, m) + solution(currX, currY, currX + 1, currY, k - 1, n, m);
    }
    else
    {
        dp[lastX][lastY][currX][currY][k] = solution(currX, currY, currX + 1, currY, k, n, m) + solution(currX, currY, currX, currY + 1, k - 1, n, m);
    }
    return dp[lastX][lastY][currX][currY][k];
}
int main()
{
    fill_n(&dp[0][0][0][0][0], 10 * 10 * 10 * 10 * 10, -1);
    cout << solution(0, 0, 0, 1, 2, 3, 3) + solution(0, 0, 1, 0, 2, 3, 3);
}