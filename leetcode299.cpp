#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int bull = 0, cow = 0, n = secret.size();
        bool dp[n];
        fill_n(dp, n, false);
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                bull++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (guess[i] == secret[i])
                continue;

            for (int j = 0; j < n; j++)
            {
                if (secret[j] != guess[j] and guess[j] == secret[i] and !dp[j])
                {
                    cow++;
                    dp[j] = true;
                    break;
                }
            }
        }
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};

int main()
{
    Solution s;
    cout<<s.getHint("1807", "7810");
}