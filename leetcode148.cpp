#include <bits/stdc++.h>
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
    ListNode *sortList(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        vector<ListNode *> vect;
        while (head)
        {
            vect.push_back(head);
            head = head->next;
        }
        sort(vect.begin(), vect.end(), [](ListNode *a, ListNode *b)
             { return a->val < b->val; });
        for(int i=0; i<vect.size()-1; i++){
            vect[i]->next = vect[i+1];
        }
        vect[vect.size()-1]->next = nullptr;
        return vect[0];
    }
};