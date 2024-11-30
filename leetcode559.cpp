#include<bits/stdc++.h>
using namespace std;



class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int ans = 0;
        for (auto i : root->children)
        {
            ans = max(1 + maxDepth(i), ans);
        }
        return ans;
    }
};