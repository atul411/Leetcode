#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

class Solution
{
public:
    Node *flatten(Node *head)
    {
        if (head == nullptr)
        {
            return head;
        }

        Node *ans = head, *temp = head;
        stack<Node *> st;
        if (head->next)
        {
            st.push(head->next);
        }
        if (head->child)
        {
            st.push(head->child);
        }
        while (st.size())
        {
            auto top = st.top();
            st.pop();
            temp->next = top;
            temp->next->prev = temp;
            temp->child = nullptr;
            temp = temp->next;
            if (temp->next)
            {
                st.push(temp->next);
            }
            if (temp->child)
            {
                st.push(temp->child);
            }
        }
        temp->next = nullptr;
        temp->child = nullptr;
        return ans;
    }
};

class Solution
{
public:
    int countSegments(string s)
    {
        string str = string();
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (str.size())
                {
                    ans++;
                }
                str = string();
            }
            else
            {
                str += s[i];
            }
        }
        if(str.size())
            ans++;
        return ans;
    }
};