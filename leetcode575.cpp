#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_set<int> uset;
        for (auto element : candyType)
        {
            uset.insert(element);
        }
        return uset.size() >= candyType.size() / 2 ? candyType.size() / 2 : uset.size();
    }
};