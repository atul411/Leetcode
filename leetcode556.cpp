#include<bits/stdc++.h>
using namespace std;

class Solution
{
    using ll = long long;
    vector<int> getvector(int n)
    {
        vector<int> arr;
        while (n)
        {
            arr.push_back(n % 10);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
    ll getNumber(vector<int> arr)
    {
        ll ans = 0;
        int i = arr.size();
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            ans += arr[i] * pow(10, arr.size() - i - 1);
        }
        return ans;
    }

public:
    int nextGreaterElement(int n)
    {
        vector<int> vect = getvector(n);
        int size = vect.size(), j, i;
         int idx = -1;
        for (i = size - 2; i >= 0; i--)
        {
            j = i + 1;
            int num = INT_MAX;
            while (j < size)
            {
                if(vect[j]>vect[i] and vect[j]<num){
                    cout<<j<<"\t"<<i;
                    num = vect[j];
                    idx = j;
                }
                j++;
            }
            if (num != INT_MAX)
            {
                swap(vect[i], vect[idx]);
                break;
            }
        }
        if (idx != -1)
        {
            sort(vect.begin() + i + 1, vect.end());
        }
        ll ans = getNumber(vect);
        if (ans == n or ans > INT_MAX)
            return -1;
        return ans;
    }
};


int main(){
    Solution s;
    cout<<s.nextGreaterElement(21);
}