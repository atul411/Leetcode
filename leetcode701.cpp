/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if(root==nullptr){
            root = new TreeNode(val);
            return root;
        }
        insert(root, val);
        return root;
    }

    void insert(TreeNode *root, int val)
    {
        if (root->val < val)
        {
            if (root->right == nullptr)
            {
                root->right = new TreeNode(val);
            }
            else
            {
                insert(root->right, val);
            }
        }
        else
        {
            if (root->left == nullptr)
            {
                root->left = new TreeNode(val);
            }
            else
            {
                insert(root->left, val);
            }
        }
    }
};