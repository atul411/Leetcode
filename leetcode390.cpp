#include<bits/stdc++.h>

class Solution
{
public:
    int lastRemaining(int n)
    {
        vector<int> arr(n, 0);
        for (int i = 1; i <= n; i++)
        {
            arr[i - 1] = i;
        }
        int i = 0;
        while (arr.size() > 1)
        {
            list<int> temp;
            if (i % 2 == 0)
            {
                for (int j = 1; j < arr.size(); j = j + 2)
                {
                    temp.push_back(arr[j]);
                }
            }
            else
            {
                for (int j = arr.size() - 2; j >= 0; j = j - 2)
                {
                    temp.push_front(arr[j]);
                }
            }
            i++;
            arr = vector<int>(temp.begin(), temp.end());
        }
        return arr[0];
    }
};