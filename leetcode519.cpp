#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m, total;
    unordered_map<int, int> umap;
    Solution(int m_s, int n_s)
    {
        n = n_s;
        m = m_s;
        total = m_s * n_s;
        srand(time(0));
    }

    vector<int> flip()
    {
        int random = rand() % (total);
        total--;
        int r = umap.count(random) ? umap[random] : random;
        umap[r] = umap.count(total) ? umap[total] : total;
        return {r / n, r % n};
    }

    void reset()
    {
        total = n * m;
        umap.clear();
    }
};