#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr)
{
    int n = arr.size(), m = arr[0].size();
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] == 0)
                continue;
            arr[i][j] = min({arr[i - 1][j], arr[i - 1][j - 1], arr[i][j - 1]}) + 1;
            ans = max(ans, arr[i][j]);
        }
    }
    return ans;
}

int main()
{
    cout << solution({{0, 1, 1, 0, 1},
                      {1, 1, 0, 1, 0},
                      {0, 1, 1, 1, 0},
                      {1, 1, 1, 1, 0},
                      {1, 1, 1, 1, 1},
                      {0, 0, 0, 0, 0}});
}