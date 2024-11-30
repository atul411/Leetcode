#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int n, m;
    bool isSafe(int i, int j)
    {
        return i < n and i >= 0 and j < m and j >= 0;
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        n = heights.size(), m = heights[0].size();
        vector<vector<pair<bool, bool>>> arr(n, vector<pair<bool, bool>>(m, {true, true}));
        queue<pair<int, int>> que;
        for (int i = 0; i < n; i++)
        {
            que.push({i, m - 1});
            arr[i][m - 1].first = false;
        }
        for (int i = 0; i < m; i++)
        {
            que.push({n - 1, i});
            arr[n - 1][i].first = false;
        }
        while (que.size())
        {
            auto front = que.front();
            que.pop();
            if (isSafe(front.first + 1, front.second) and arr[front.first + 1][front.second].first and arr[front.first + 1][front.second] >= arr[front.first][front.second])
            {
                arr[front.first + 1][front.second].first = false;
                que.push({front.first + 1, front.second});
            }
            if (isSafe(front.first - 1, front.second) and arr[front.first - 1][front.second].first and arr[front.first - 1][front.second] >= arr[front.first][front.second])
            {
                arr[front.first - 1][front.second].first = false;
                que.push({front.first - 1, front.second});
            }
            if (isSafe(front.first, front.second + 1) and arr[front.first][front.second + 1].first and arr[front.first][front.second + 1] >= arr[front.first][front.second])
            {
                arr[front.first][front.second + 1].first = false;
                que.push({front.first, front.second + 1});
            }
            if (isSafe(front.first, front.second - 1) and arr[front.first][front.second - 1].first and arr[front.first][front.second - 1] >= arr[front.first][front.second])
            {
                arr[front.first][front.second - 1].first = false;
                que.push({front.first, front.second - 1});
            }
        }
        for (int i = 0; i < m; i++)
        {
            que.push({0, i});
            arr[0][i].second = false;
        }
        for (int i = 0; i < n; i++)
        {
            que.push({i, 0});
            arr[i][0].second = false;
        }
        while (que.size())
        {
            auto front = que.front();
            que.pop();
            if (isSafe(front.first + 1, front.second) and arr[front.first + 1][front.second].second and arr[front.first + 1][front.second] >= arr[front.first][front.second])
            {
                arr[front.first + 1][front.second].second = false;
                que.push({front.first + 1, front.second});
            }
            if (isSafe(front.first - 1, front.second) and arr[front.first - 1][front.second].second and arr[front.first - 1][front.second] >= arr[front.first][front.second])
            {
                arr[front.first - 1][front.second].second = false;
                que.push({front.first - 1, front.second});
            }
            if (isSafe(front.first, front.second + 1) and arr[front.first][front.second + 1].second and arr[front.first][front.second + 1] >= arr[front.first][front.second])
            {
                arr[front.first][front.second + 1].second = false;
                que.push({front.first, front.second + 1});
            }
            if (isSafe(front.first, front.second - 1) and arr[front.first][front.second - 1].second and arr[front.first][front.second - 1] >= arr[front.first][front.second])
            {
                arr[front.first][front.second - 1].second = false;
                que.push({front.first, front.second - 1});
            }
        }
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j].first == false and arr[i][j].second == false)
                {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};
int main(){
}