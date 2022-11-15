#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    vector<int> vect;

public:
    Solution(vector<int> &nums)
    {
        vect = nums;
        srand(time(0));
    }

    vector<int> reset()
    {
        return vect;
    }

    vector<int> shuffle()
    {
        vector<int> ans = vect;
        int div = vect.size();
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            int random = (rand() % div);
            swap(ans[i], ans[random]);
            div--;
        }
        return ans;
    }
};

int main()
{
    vector<int> vect = {10, 2, 3, 4, 5, 6, 11};
    Solution s(vect);
    for (int i = 0; i < 5; i++)
    {
        for (auto j : s.shuffle())
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    for (auto j : s.reset())
    {
        cout << j << "\t";
    }
}