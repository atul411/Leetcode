#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int singleNumber(vector<int> &nums)
	{
		int ans;
		unordered_map<int, int> umap;
		for (int i : nums)
		{
			if (umap[i] == 2)
			{
				umap.erase(i);
			}
			else
			{
				umap[i]++;
			}
		}
		for (auto i = umap.begin(); i != umap.end(); i++)
		{
			ans = i->first;
		}
		return ans;
	}
};