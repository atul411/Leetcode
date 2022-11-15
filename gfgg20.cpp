#include "library.h"

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool isSafe(vi x, vi y, double r, int x1, int y1)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (distance(x[i], y[i], x1, y1) <= r)
        {
            return false;
        }
    }
    return true;
}

bool bfs(int x, int y, int n, int m, int r, vi X, vi Y, vvb &helper)
{
    if (x == n and y == m)
    {
        return true;
    }
    helper[x][y] = true;
    bool ans = false;
    vi xaxes = {0, 0, -1, 1, 1, -1, -1, 1};
    vi yaxes = {1, -1, 0, 0, 1, -1, 1, -1};
    for (int i = 0; i < 8; i++)
    {
        int tempx = x + xaxes[i], tempy = y + yaxes[i];
        if (tempx >= 1 and tempx <= n and tempy >= 1 and tempy <= m and !helper[tempx][tempy] and isSafe(X, Y, r, tempx, tempy))
        {
            ans = ans || bfs(tempx, tempy, n, m, r, X, Y, helper);
        }
        if (ans == true)
        {
            return true;
        }
    }
    return ans;
}

bool solution(int n, int m, vvb &helper, vi x, vi y, double r)
{
    bool first = isSafe(x, y, r, 1, 1);
    if (!first)
    {
        return false;
    }
    return bfs(1, 1, n, m, r, x, y, helper);
}

int main()
{
    int n = 5, m = 5, r = 1;
    vi X = {1, 1}, Y = {2, 3};
    vvb helper(6, vb(6, false));
    cout << solution(n, m, helper, X, Y, r);
}