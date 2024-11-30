#include<bits/stdc++.h>
using namespace std;
struct Triplet
{
    int a, b, c;
};
class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> arr(n, vector<int>(m, INT_MAX));
        queue<pair<int, int>> que;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    arr[i][j] = 0;
                    que.push({i, j});
                }
            }
        }
        while (que.size())
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            if (valid(x, y + 1, n, m) and arr[x][y + 1] > arr[x][y] + 1)
            {
                arr[x][y + 1] = arr[x][y] + 1;
                que.push({x, y + 1});
            }
            if (valid(x, y - 1, n, m) and arr[x][y - 1] > arr[x][y] + 1)
            {
                arr[x][y - 1] = arr[x][y] + 1;
                que.push({x, y - 1});
            }
            if (valid(x + 1, y, n, m) and arr[x + 1][y] > arr[x][y] + 1)
            {
                arr[x + 1][y] = arr[x][y] + 1;
                que.push({x + 1, y});
            }
            if (valid(x - 1, y, n, m) and arr[x - 1][y] > arr[x][y] + 1)
            {
                arr[x - 1][y] = arr[x][y] + 1;
                que.push({x - 1, y});
            }
        }
        return arr;
    }
    bool valid(int i, int j, int n, int m)
    {
        if (i >= 0 and i < n and j >= 0 and j < m)
            return true;
        return false;
    }
};