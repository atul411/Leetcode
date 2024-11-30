#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr)
{
    int n = arr[0].size();
    for (int i = 2; i < n; i++)
    {
        arr[0][i] += max(arr[0][i - 2], arr[1][i - 2]);
        arr[1][i] += max(arr[0][i - 2], arr[1][i - 2]);
    }
    return max(arr[0][n - 1], arr[1][n - 1]);
}

int main()
{
    cout << solution({{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10}});
}