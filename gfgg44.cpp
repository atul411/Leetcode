#include<bits/stdc++.h>

ll solution(int n)
{
    if (1 % n == 0)
        return 1;
    queue<ll> que;
    que.push(1);
    while (que.size())
    {
        ll front = que.front();
        que.pop();
        if (front % n == 0)
        {
            return front;
        }
        que.push(front * 10);
        que.push(front * 10 + 1);
    }
    return -1;
}

int main()
{
    cout<<solution(17);
}