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
    int widthOfBinaryTree(TreeNode *root)
    {
        queue<TreeNode *> que1, que2;
        int nullcounter = 0, ans = 0, elementSize = 0;
        que1.push(root);
        while (que1.size() or que2.size())
        {
            if (que1.size())
            {
                if (que1.size() >= elementSize)
                {
                    elementSize = que1.size();
                    ans = (ans, elementSize + nullcounter);
                }
                int n = que1.size();
                for (int i = 0; i < n; i++)
                {
                    auto front = que1.front();
                    que1.pop();
                    if (front->left == nullptr and que2.size())
                    {
                        nullcounter++;
                    }
                    else
                    {
                        que2.push(front->left);
                    }
                    if (front->right == nullptr and !que1.empty())
                    {
                        nullcounter++;
                    }
                    else
                    {
                        que2.push(front->right);
                    }
                }
            }
            else
            {

                if (que2.size() >= elementSize)
                {
                    elementSize = que2.size();
                    ans = elementSize + nullcounter;
                }
                while (que2.size())
                {
                    auto front = que2.front();
                    if (front->left == nullptr)
                    {
                        nullcounter++;
                    }
                    else
                    {
                        que1.push(front->left);
                    }
                    if (front->right == nullptr)
                    {
                        nullcounter++;
                    }
                    else
                    {
                        que1.push(front->right);
                    }
                    que2.pop();
                }
            }
        }
        return ans;
    }
};