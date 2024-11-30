#include<bits/stdc++.h>

bool dfs(vvi &matrix, int x, int y)
{
    int ans = 1;
    matrix[x][y] = 0;
    if (x + 1 < matrix.size() and matrix[x + 1][y])
    {
        ans += dfs(matrix, x + 1, y);
    }
    if (x - 1 >= 0 and matrix[x - 1][y])
    {
        ans += dfs(matrix, x - 1, y);
    }
    if (y - 1 >= 0 and matrix[x][y - 1])
    {
        ans += dfs(matrix, x, y - 1);
    }
    if (y + 1 < matrix[0].size() and matrix[x][y + 1])
    {
        ans += dfs(matrix, x, y + 1);
    }
    if (x - 1 >= 0 and y - 1 >= 0 and matrix[x - 1][y - 1])
    {
        ans += dfs(matrix, x - 1, y - 1);
    }
    if (x + 1 < matrix.size() and y + 1 < matrix[0].size() and matrix[x + 1][y + 1])
    {
        ans += dfs(matrix, x + 1, y + 1);
    }
    if (x - 1 >= 0 and y - 1 >= 0 and matrix[x - 1][y - 1])
    {
        ans += dfs(matrix, x - 1, y - 1);
    }
}

int main()
{
}