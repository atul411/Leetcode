#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        TreeNode *root = new TreeNode();
        int n = nums.size() - 1, maxIndx;
        makeTree(root, 0, n, nums);
        return root;
    }

    int findMaxIndex(int start, int end, vector<int> arr)
    {
        int ans = start;
        for (int i = start; i <= end; i++)
        {
            if (arr[i] > arr[ans])
            {
                ans = i;
            }
        }
        return ans;
    }

    void makeTree(TreeNode *root, int start, int end, vector<int> nums)
    {
        int maxIndx = findMaxIndex(start, end, nums);
        root->val = nums[maxIndx];
        if (maxIndx - 1 >= start)
        {
            root->left = new TreeNode();
            makeTree(root->left, start, maxIndx - 1, nums);
        }
        else
        {
            root->left = nullptr;
        }
        if (maxIndx + 1 <= end)
        {
            root->right = new TreeNode();
            makeTree(root->right, maxIndx + 1, end, nums);
        }
        else
        {
            root->right = nullptr;
        }
    }
};
