#include<bits/stdc++.h>
using namespace std;
double solution(int n, float p)
{
    vd arr(n + 1, 0);
    arr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i - 2 >= 0)
        {
            arr[i] += arr[i - 2] * p;
        }
        if (i - 3 >= 0)
        {
            arr[i] += arr[i - 3] * (1 - p);
        }
    }
    return arr[n];
}
int main()
{
    cout<<solution(5, 0.2);
}