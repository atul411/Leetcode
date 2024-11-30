#include<bits/stdc++.h>
class Solution
{
public:
	int hIndex(vector<int> &citations)
	{
		sort(citations.begin(), citations.end());
		int n = citations.size(), ans = -1;
		for (int i = 0; i < n; i++)
		{
			if (n - i >= citations[i])
			{
				ans = max(ans,citations[i]);
			}
			else{
                ans = max(ans, n-i);
			}
		}
		return ans;
	}
};