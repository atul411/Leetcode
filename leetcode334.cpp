#include<bits/stdc++.h>
class Solution
{
public:
	bool increasingTriplet(vector<int> &nums)
	{
		int n = nums.size(), low = INT_MAX, high = INT_MAX,i=0;
		while (i<n)
		{
			if(low>=nums[i]){
				low = nums[i++];
			}
			else if(high>=nums[i]){
				high = nums[i++];
			}
			else
				return true;
		}
		return false;
		
	}
};