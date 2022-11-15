#include "library.h"

int solution(int n, int k, int m)
{
    if (n == 0)
        return 1;
    if (k == 0)
        return solution(n, k, m - 1);
    if (m <= 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i == m)
        {
            ans += solution(n - 1, k - 1, i);
        }
        else
        {
            ans += solution(n - 1, k-1, i);
        }
    }
    return ans;
}

int main()
{
    int a = solution(3,1,3);
    cout<<a;
}