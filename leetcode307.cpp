#include<bits/stdc++.h>
using namespace std;

class NumArray
{
    vector<int> vect;
    int n;

public:
    NumArray(vector<int> &nums)
    {
        n = nums.size();
        vect.resize(2 * n);
        for (int i = n, j = 0; i < 2 * n; i++, j++)
        {
            vect[i] = nums[j];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            vect[i] = vect[2 * i] + vect[2 * i + 1];
        }
    }

    void update(int index, int val)
    {
        index += n;
        vect[index] = val;
        while (index>0)
        {
            int left = index;
            int right = index;
            if(index%2==0){
                right = index+1;
            }else{
                left = index-1;
            }
            vect[index/2] = vect[left] + vect[right];
            index /= 2;
        }
        
    }

    int sumRange(int left, int right)
    {
        left += n;
        right += n;
        int sum = 0;
        while (left <= right)
        {
            if ((left % 2) == 1)
            {
                sum += vect[left];
                left++;
            }
            if ((right % 2) == 0)
            {
                sum += vect[right];
                right--;
            }
            left /= 2;
            right /= 2;
        }
        return sum;
    }
};