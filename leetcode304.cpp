#include<bits/stdc++.h>
using namespace std;

class NumMatrix
{
    vector<vector<int>> vect;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vect = vector<vector<int>>(n, vector<int>(m, 0));
        vect[0][0] = matrix[0][0];
        for (int i = 1; i < m; i++)
        {
            vect[0][i] = vect[0][i - 1] + matrix[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            vect[i][0] = vect[i - 1][0] + matrix[i][0];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                vect[i][j] = vect[i - 1][j] + vect[i][j - 1] + matrix[i][j] - vect[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        return helper(row2, col2) - helper(row1 - 1, col2) - helper(row2, col1 - 1) + helper(row1 - 1, col1 - 1);
    }
    int helper(int row, int col)
    {
        if (row < 0 or col < 0)
            return 0;
        return vect[row][col];
    }
};
