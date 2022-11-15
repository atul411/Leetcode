#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size(), m = matrix[0].size();
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (pq.size() == k and matrix[i][0] >= pq.top())
            {
                break;
            }
            for (int j = 0; j < m; j++)
            {
                if (pq.size() < k)
                {
                    pq.push(matrix[i][j]);
                }
                else if (matrix[i][j] < pq.top())
                {
                    pq.pop();
                    pq.push(matrix[i][j]);
                }
                else
                {
                    break;
                }
            }
        }
        return pq.top();
    }
};