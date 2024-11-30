#include<bits/stdc++.h>
using namespace std;


struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<ListNode *> st1, st2;
        stack<int> st3;
        ListNode *head = l1;
        while (head)
        {
            st1.push(head);
            head = head->next;
        }
        head = l2;
        while (head)
        {
            st2.push(head);
            head = head->next;
        }
        int carry = 0;
        while (st1.size() or st2.size())
        {
            if (st1.size())
            {
                carry += st1.top()->val;
                st1.pop();
            }
            if (st2.size())
            {
                carry += st2.top()->val;
                st2.pop();
            }
            st3.push(carry % 10);
            carry /= 10;
        }
        while (carry)
        {
            st3.push(carry % 10);
            carry /= 10;
        }
        if (!st3.size())
        {
            return nullptr;
        }
        ListNode *ans = new ListNode(st3.top());
        st3.pop();
        ListNode *temp = ans;
        while (st3.size())
        {
            temp->next = new ListNode(st3.top());
            st3.pop();
            temp = temp->next;
        }
        return ans;
    }
};

