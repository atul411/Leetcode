#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        queue<Node *> que1, que2;
        vector<vector<int>> ans;
        que1.push(root);
        while (que1.size() or que2.size())
        {
            if (que1.size())
            {
                vector<int> temp;
                while (que1.size())
                {
                    auto front = que1.front();
                    que1.pop();
                    if(front == nullptr)
                        continue;
                    temp.push_back(front->val);
                    for(auto i: front->children){
                        que2.push(i);
                    }
                }
                if(temp.size())
                    ans.push_back(temp);
            }
            else
            {
                vector<int> temp;
                while (que2.size())
                {
                    auto front = que2.front();
                    que2.pop();
                    if(front == nullptr)
                        continue;
                    temp.push_back(front->val);
                    for(auto i: front->children){
                        que1.push(i);
                    }
                }
                if(temp.size())
                    ans.push_back(temp);
            }
        }
    }
};