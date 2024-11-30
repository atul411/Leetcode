#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        int minIndexSum = INT_MAX, length1 = list1.size(), length2 = list2.size();
        for (int i = 0; i < length1; i++)
        {
            for (int j = 0; j < length2; j++)
            {
                if (list1[i] == list2[j])
                {
                    minIndexSum = min(minIndexSum, i + j);
                }
            }
        }
        if (minIndexSum == INT_MAX)
        {
            return vector<string>();
        }
        vector<string> vect;
        for (int i = 0; i < length1; i++)
        {
            for (int j = 0; j < length2; j++)
            {
                if (list1[i] == list2[j] and (i + j) == minIndexSum)
                {
                    vect.push_back(list1[i]);
                }
            }
        }
        return vect;
    }
};