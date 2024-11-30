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
    int findSecondMinimumValue(TreeNode *root)
    {
        queue<TreeNode *> que;
        int number = root->val, ans = INT_MAX;
        que.push(root);
        while (que.size())
        {
            auto fornt = que.front();
            que.pop();
            if (fornt->val > number and fornt->val < ans)
            {
                ans = fornt->val;
            }
            else
            {
                if (root->left != nullptr)
                {
                    que.push(root->left);
                }
                if (root->right)
                {
                    que.push(root->righ);
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};