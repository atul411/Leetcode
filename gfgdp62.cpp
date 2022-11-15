#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr)
{
    int mx = *max_element(arr.begin(), arr.end()), n = arr.size();
    int freq[mx + 1];
    fill_n(freq, mx + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int ans = 0, i = mx;
    while (i > 0)
    {
        if (freq[i] > 0)
        {
            ans += i;
            freq[i]--;
            freq[i - 1]--;
        }
        else
        {
            i--;
        }
    }
    return ans;
}

int main()
{
    cout<<solution({1, 2, 2, 2, 3, 4});
}