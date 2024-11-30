#include<bits/stdc++.h>
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
public:
    int longestUnivaluePath(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        return max({1+longestPath(root->left, root->val)+longestPath(root->right, root->val), longestUnivaluePath(root->left), longestUnivaluePath(root->right)});
    }

    int longestPath(TreeNode *root, int val)
    {
        if (root == nullptr)
        {
            return 0;
        }
        if (root->val != val)
        {
            return 0;
        }
        return 1 + max(longestPath(root->left, val), longestPath(root->right, val));
    }
};