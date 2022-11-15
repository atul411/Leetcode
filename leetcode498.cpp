#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        vector<int> arr;
        for (int i = 0; i < mat.size(); i = i + 2)
        {
            int temp = i, j = 0;
            while (temp >= 0 and j < mat[0].size())
            {
                arr.push_back(mat[temp][j]);
                temp--;
                j++;
            }
        }
        for (int i = 2; i < mat[0].size(); i++)
        {
            int temp = mat.size() - 1, j = i;
            while (temp >= 0 and j < mat[0].size())
            {
                arr.push_back(mat[temp][j]);
                temp--;
                j++;
            }
        }
        for (int i = 2; i < mat[0].size(); i++)
        {
            int temp = 0, j = i;
            while (temp < mat.size() and j >= 0)
            {
                arr.push_back(mat[temp][j]);
                temp++;
                j--;
            }
        }
        for (int i = 2; i < mat.size(); i++)
        {
            int temp = i, j = mat[0].size() - 1;
            while (temp<mat.size() and j>=0)
            {
                arr.push_back(mat[temp][j]);
                temp++;
                j--;
            } 
        }
    }
};
