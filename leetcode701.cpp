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