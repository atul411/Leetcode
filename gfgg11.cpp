#include<bits/stdc++.h>
using namespace std;
bool solution(vi arr)
{
    int size = arr.size();
    bool dp[size];
    fill(dp[0], size, false);
    queue<int> que;
    que.push(0);
    dp[0] = true;
    while (que.size())
    {
        int front = que.front();
        que.pop();
        int n = arr[front];
        int nextIdx = (front + n) % size;
        if (nextIdx == front)
            return false;
        else if (dp[nextIdx] == true)
        {
            return true;
        }
        dp[nextIdx] = true;
        que.push(nextIdx);
    }
    return false;
}
int main()
{
    string a = string();
    cout << solution({1, 2});
}