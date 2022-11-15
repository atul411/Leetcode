#include "library.h"

int solution(vi x, vi revenue, int m, int t, int last, int current)
{
    if (current >= x.size())
        return 0;
    int ans = INT_MIN, tem = INT_MIN;
    if (last == -1 and x[current] <= m)
    {
        ans = revenue[current] + solution(x, revenue, m, t, current, current + 1);
    }
    if (last != -1 and x[current] <= m and x[current] - x[last] >= t)
    {
        ans = revenue[current] + solution(x, revenue, m, t, current, current + 1);
    }
    return max(ans, solution(x, revenue, m, t, last, current + 1));
}

int main()
{
    cout<<solution({6, 7, 12, 13, 14}, {5, 6, 5, 3, 1}, 20, 5, -1, 0);
}