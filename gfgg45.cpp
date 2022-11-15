#include "library.h"

bool isSetepping(int n)
{
    if (n < 10)
        return true;
    int x = n % 10;
    n /= 10;
    while (n > 0)
    {
        int temp = n % 10;
        if (abs(x - temp) != 1)
            return false;
        n = n / 10;
        x = temp;
    }
    return n == 0;
}

vi solutionBfs(int n, int m)
{
    vi ans;
    queue<int> que;
    for (int i = 0; i < 10; i++)
    {
        que.push(i);
    }
    while (que.size())
    {

        int front = que.front();
        que.pop();
        if (front >= n and front <= m)
        {
            ans.push_back(front);
        }
        if (front >= m)
            break;
        if (front == 0)
            continue;
        int lastDigit = front % 10;
        que.push(front * 10 + lastDigit - 1);
        que.push(front * 10 + lastDigit + 1);
    }
    return ans;
}

int main()
{
    vi ans = solutionBfs(0, 21);
    for (auto i : ans)
    {
        cout << i << endl;
    }
}