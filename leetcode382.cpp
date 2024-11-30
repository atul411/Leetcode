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
    vector<int> dp;
public:
    Solution(ListNode *head)
    {
        ListNode* temp = head;
        while (temp)
        {
            dp.push_back(temp->val);
            temp = temp->next;
            srand(time(0));
        }
    }

    int getRandom()
    {
        int random = rand()%dp.size();
        return dp[random];
    }
};