#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n and j<i+1; j++)
        {
            if (j > i)
                continue;
            if (j == i)
            {
                arr[i][j] += arr[i - 1][j - 1];
            }
            else
            {
                arr[i][j] += i - 1 > 0 ? max(arr[i - 1][j - 1], arr[i - 1][j]) : arr[i - 1][j];
            }
        }
    }
    int ans = INT_MIN;
    for(auto i: arr[n-1]){
        ans = max(ans, i);
    }
    return ans;
}

int main()
{
    cout<<solution({{ 4, 2 ,3 ,4 ,1 },
                     { 2 , 9 ,1 ,10 ,5 },
                     {15, 1 ,3 , 0 ,20 },
                     {16 ,92, 41, 44 ,1},
                     {8, 142, 6, 4, 8} });
}