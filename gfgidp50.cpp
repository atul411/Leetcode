#include "library.h"

vi solution(vi arr)
{
    int n = arr.size();
    vi dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = vi({arr[i]});
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j] + 1 and dp[i].size() < dp[j].size() + 1)
            {
                dp[i] = dp[j];
                dp[i].push_back(arr[i]);
            }
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i].size() > dp[index].size())
        {
            index = i;
        }
    }

    return dp[index];
}

vi solutionDp(vi arr)
{
    unordered_map<int, int> umap;
    int n = arr.size(), dp[n], index, maxLength = -1;
    fill(dp[0], n, 0);

    for (int i = 0; i < n; i++)
    {
        if (umap.count(arr[i] - 1))
        {
            dp[i] = dp[umap[arr[i] - 1]] + 1;
        }
        else
        {
            dp[i] = 1;
        }
        umap[arr[i]] = i;
        if (maxLength < dp[i])
        {
            maxLength = dp[i];
            index = i;
        }
    }
    vi temp;
    int num = arr[index];
    while (maxLength--)
    {
        temp.push_back(num--);
    }
    return temp;
}



int main()
{
   vi a = {1,5,2,3,4,1, -1, 7, -11, 5};
   sort(a.begin(), a.end());
   auto b = lower_bound(a.begin(), a.end(), 5);
   cout<<(b-a.begin());
}

