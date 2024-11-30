#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr)
{
    int n = arr.size();
    bool row[n][n], col[n][n];
    fill_n(&row[0][0], n * n, false);
    fill_n(&col[0][0], n * n, false);
    for (int i = 0; i < n; i++)
    {
        int temp = true;
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[i][j] == 0 and temp)
                temp = false;
            col[i][j] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = true;
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[j][i] == 0 and temp)
                temp = false;
            row[j][i] = temp;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans += row[i][j] && col[i][j] ? 1 : 0;
        }
    }
    return ans;
}

int main()
{
    cout << solution({{1, 0, 1, 1},
                      {0, 1, 1, 1},
                      {1, 1, 1, 1},
                      {0, 1, 1, 0}});
}