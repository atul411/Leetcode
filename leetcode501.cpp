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
    unordered_map<int, int> umap;

public:
    void traverse(TreeNode *root)
    {
        if (root == nullptr)
            return;
        umap[root->val]++;
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        traverse(root);
        vector<int> vect;
        int mode = INT_MIN;
        for (auto i : umap)
        {
            if (i.second > mode)
            {
                mode = i.second;
            }
        }
        for (auto i : umap)
        {
            if (i.second == mode)
            {
                vect.push_back(i.first);
            }
        }
        return vect;
    }
};