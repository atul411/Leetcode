#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    int m, n;

public:
    vector<vector<string>> printTree(TreeNode *root)
    {
        m = getHeight(root), n;
        n = pow(2, m) - 1;
        vector<vector<string>> dp(m, vector<string>(n, string()));
        int row = 0, col = (n - 1) / 2;
        solve(dp, row, col, root);
        return dp;
    }

    int getHeight(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        return max(getHeight(root->left), getHeight(root->right)) + 1;
    }

    void solve(vector<vector<string>> &dp, int row, int col, TreeNode *root)
    {
        dp[row][col] = to_string(root->val);
        if (root->left)
        {
            int nRow = row + 1, nCol = col - pow(2, m - row - 2);
            solve(dp, nRow, nCol, root->left);
        }
        if (root->right)
        {
            int nRow = row + 1, nCol = col + pow(2, m - row - 2);
            solve(dp, nRow, nCol, root->left);
        }
    }
};