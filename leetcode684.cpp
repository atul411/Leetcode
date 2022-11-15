#include <bits/stdc++.h>
using namespace std;

class Solution
{
    using vi = vector<int>;

public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vi parent(n), ans;
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int first = findParent(edges[i][0] - 1, parent);
            int second = findParent(edges[i][1] - 1, parent);
            cout << edges[i][0] - 1 << " " << edges[i][1] - 1 << "first and second is " << first << "\t" << second << endl;
            if (first == second)
            {
                ans = edges[i];
            }
            else
            {
                parent[first] = second;
            }
            for (auto i : parent)
            {
                cout << i << "\t";
            }
            cout << endl;
        }
        for (auto i : ans)
        {
            cout << i << "\t";
        }
        return ans;
    }

    int findParent(int x, vi arr)
    {
        if (arr[x] == x)
        {
            return x;
        }
        return findParent(arr[x], arr);
    }
};

int main()
{
    Solution s;
    vector<vector<int>> arr = {{1, 2}, {1, 3}, {2, 3}};
    s.findRedundantConnection(arr);
}