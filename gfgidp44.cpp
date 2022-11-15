#include "library.h"

int solution(vi str1, vi str2, int x, int y, int last)
{
    if (x < 0 or y < 0)
        return 0;
    int b = max(solution(str1, str2, x, y - 1, last), solution(str1, str2, x - 1, y, last));
    if (str1[x] == str2[y] and str1[x] < last)
    {
        b = max(solution(str1, str2, x - 1, y - 1, str1[x]) + 1, b);
    }
    return b;
}
int solutionDp(vi vect1, vi vect2)
{
    int n = vect1.size(), m = vect2.size();
    int dp[n+1][m+1];
    fill(dp[0][0], n, m, 0);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
        }
    }
}

int main()
{
    cout << solution({3, 4, 9, 1}, {5, 3, 8, 9, 10, 2, 1}, 3, 6, inf);
}