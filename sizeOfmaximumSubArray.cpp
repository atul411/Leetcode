#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int ans = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int total = 0;
        for (int j = 0; j <= i; j++)
        {
            total += arr[j];
        }
        if(total>ans){

        }
    }
}

int main()
{
    cout << solution({1, -2, 1, 1, -2, 1});
}