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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *first = nullptr, *second = nullptr, *temp = head, **first1 = nullptr, **second1 = nullptr;
        while (temp != nullptr)
        {
            if (temp->val < x)
            {
                if (first == nullptr)
                {
                    first = new ListNode(temp->val);
                    first1 = &first;
                }
                else
                {
                    (*first1)->next = new ListNode(temp->val);
                    first1 = &(*first1)->next;
                }
            }
            else
            {

                if (second == nullptr)
                {
                    second = new ListNode(temp->val);
                    second1 = &second;
                }
                else
                {
                    (*second1)->next = new ListNode(temp->val);
                    second1 = &(*second1)->next;
                }
            }
            temp = temp->next;
        }
        if (first1 == nullptr)
            return second;
       (*first1)->next = second;
        return first;
    }
};