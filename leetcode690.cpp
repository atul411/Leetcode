#include<bits/stdc++.h>
using namespace std;


class Employee
{
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution
{

public:
    int getImportance(vector<Employee *> employees, int id)
    {
        unordered_map<int, pair<int, vector<int>>> umap;
        for (int i = 0; i < employees.size(); i++)
        {
            umap[employees[i]->id] = make_pair(employees[i]->importance, employees[i]->subordinates);
        }
        int ans = 0;
        queue<int> que;
        que.push(id);
        while (que.size())
        {
            auto front = que.front();
            ans += umap[front].first;
            for (auto i : umap[front].second)
            {
                que.push(i);
            }
        }
        return ans;
    }
};