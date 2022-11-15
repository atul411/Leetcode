#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                arr[i][j] += max(arr[i - 1][j], arr[i - 1][j + 1]);
            }
            else if (j == n - 1)
            {
                arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
            }
            else
            {
                arr[i][j] += max({arr[i - 1][j], arr[i - 1][j - 1], arr[i - 1][j + 1]});
            }
        }
    }
    int ans = 0;
    for (auto num : arr[n - 1])
    {
        ans = max(ans, num);
    }
    return ans;
}

int main()
{
    cout << solution({{4, 2, 3, 4},
                      {2, 9, 1, 10},
                      {15, 1, 3, 0},
                      {16, 92, 41, 44}});
}