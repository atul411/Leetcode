#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

struct Comprator {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
   public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Comprator> pq;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr) {
                pq.push(lists[i]);
            }
        }
        if (pq.empty()) return nullptr;
        ListNode *temp = new ListNode(), *ans = temp;
        while (pq.size()) {
            auto top = pq.top();
            pq.pop();
            temp->val = top->val;
            if (top->next != nullptr) {
                pq.push(top->next);
            }
            if (pq.size()) {
                temp->next = new ListNode();
                temp = temp->next;
            }
        }
        return ans;
    }
};