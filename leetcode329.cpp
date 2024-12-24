#include <bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vi vector<int>
#define vvb vector<vector<bool>>
#define vb vector<bool>

class Solution {
   private:
    int n, m;
    bool safe(int i, int j, int curr, vvi& matrix) {
        return i >= 0 and
               i < n and
               j >= 0 and
               j < m and
               matrix[i][j] > curr;
    }
    void dfs(vvi& matrix, vvi& dp, vvb& visited, int i, int j) {
        bool a = safe(i + 1, j, matrix[i][j], matrix);
        if (a && visited[i + 1][j] == false) {
            visited[i + 1][j] = true;
            dfs(matrix, dp, visited, i + 1, j);
            dp[i][j] = max(dp[i][j], dp[i + 1][j] + 1);
        } else if (a) {
            dp[i][j] = max(dp[i][j], dp[i + 1][j] + 1);
        }

        a = safe(i - 1, j, matrix[i][j], matrix);
        if (a && visited[i - 1][j] == false) {
            visited[i - 1][j] = true;
            dfs(matrix, dp, visited, i - 1, j);
            dp[i][j] = max(dp[i][j], dp[i - 1][j] + 1);
        } else if (a) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j] + 1);
        }

        a = safe(i, j + 1, matrix[i][j], matrix);
        if (a && visited[i][j + 1] == false) {
            visited[i][j + 1] = true;
            dfs(matrix, dp, visited, i, j + 1);
            dp[i][j] = max(dp[i][j], dp[i][j + 1] + 1);
        } else if (a) {
            dp[i][j] = max(dp[i][j], dp[i][j + 1] + 1);
        }

        a = safe(i, j - 1, matrix[i][j], matrix);
        if (a && visited[i][j - 1] == false) {
            visited[i][j - 1] = true;
            dfs(matrix, dp, visited, i, j - 1);
            dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
        } else if (a) {
            dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
        }
    }

   public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size(), m = matrix[0].size();
        vvi dp(n, vi(m, 1));
        vvb visited(n, vb(m, false));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dfs(matrix, dp, visited, i, j);
                ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};