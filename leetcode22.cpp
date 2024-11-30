#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string str = "(";
        int open = 1, close = 0;
        helper(open, close, n, str, ans);
        return ans;
    }

    void helper(int open, int close, int length, string &str, vector<string> &ans)
    {
        if (str.length() == 2 * length)
        {
            ans.push_back(str);
        }
        if (open < length)
        {
            str += '(';
            helper(open + 1, close, length, str, ans);
            str.pop_back();
        }
        if (close < open)
        {
            str += ')';
            helper(open, close + 1, length, str, ans);
            str.pop_back();
        }
    }
};

int main()
{
}