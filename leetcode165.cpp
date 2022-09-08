#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compare(string s1, string s2, int start1 = 0, int start2 = 0)
    {
        if (start1 >= s1.size() or start2 >= s2.size()) // dono me se koi ek to khtm hogya
        {
            // case 1 --> dono khtm hogye aur abhi tk kcuh return nahi hua to mtlb equal
            if (start1 >= s1.size() and start2 >= s2.size())
                return 0;

            // case 2 --> s1 khtm hogyi ab agar s2 me aage sare 0s hai to equal hai else s2 bda hai
            if (start1 >= s1.size())
            {
                for (int j = start2; j < s2.size(); j++)
                    if (s2[j] != '0' and s2[j] != '.') // 0 aur dot ke alawa kuch ->s2 greater
                        return -1;

                return 0;
            }

            // case 3 --> s2 khtm hogyi ab agar s1 me aage sare 0s hai to equal hai else s1 bda hai
            if (start2 >= s2.size())
            {
                for (int j = start1; j < s1.size(); j++)
                    if (s1[j] != '0' and s1[j] != '.') // 0 aur dot ke alawa kuch ->s1 greater
                        return 1;

                return 0;
            }
        }

        // step 1 number formation from s1 string till the next dot
        string x = "";
        int i = start1;
        while (i < s1.size() and isdigit(s1[i]))
            x += s1[i++];

        int num1 = stoi(x);

        // step 2 number formation from s2 string till the next dot
        string y = "";
        int j = start2;
        while (j < s2.size() and isdigit(s2[j]))
            y += s2[j++];

        int num2 = stoi(y);

        // step 3 compare the 2 numbers if equal then recursively call , if not equal then yahi answer milgya aage jaane ki zrurt hi nahi
        if (num1 < num2)
            return -1;
        else if (num1 > num2)
            return 1;

        return compare(s1, s2, i + 1, j + 1); // i--> s1 ke dot pe hai hum to i+1 p call lgayeg
    }
    int compareVersion(string version1, string version2)
    {

        return compare(version1, version2);
    }
};