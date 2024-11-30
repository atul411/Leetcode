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
    int ans = 0;

public:
    void solution(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
            return;
        if (root->val == targetSum)
        {
            ans++;
        }
        solution(root->left, targetSum - root->val);
        solution(root->right, targetSum - root->val);
    }
    int pathSum(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
            return 0;
        solution(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return ans;
    }
};