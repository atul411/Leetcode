#include<bits/stdc++.h>

bool solution(string str, unordered_map<string, int> dict, int x)
{
    if (x < 0)
        return true;
    bool ans = false;
    string temp = "";
    for (int i = x; i >= 0; i--)
    {
        temp = str[i] + temp;
        if (dict.count(temp))
        {
            ans = solution(str, dict, i - 1);
        }
        if (ans)
            break;
    }
    return ans;
}

bool solutionDp(string str, unordered_map<string, int> dict)
{
    if(str.empty())
        return true;
    int n = str.size();
    bool dp[n + 1];
    fill(dp[0], n + 1, false);
    dp[0] = true;
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        temp += str[i];
        if(dict.count(temp)){
            dp[i+1] = true;
        }
    }
    bool ans = false;
    temp.clear();
    for(int i=n-1; i>=0; i--){
        temp = str[i]+temp;
        if(dict.count(temp) and dp[i-1])
            return true;
    }
    return ans;
}
int main()
{
    vector<string> vect({"i", "like", "sam", "sung", "samsung", "mobile", "ice",
                         "cream", "icecream", "man", "go", "mango"});
    unordered_map<string, int> umap;
    for (auto i : vect)
    {
        umap[i]++;
    }
    string str = "ilike";
    cout << solutionDp(str, umap);
}