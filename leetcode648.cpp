#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrefix(string str1, string str2)
    {
        if (str1.length() < str2.length())
        {
            return false;
        }
        int len = 0;
        while (len < str2.length())
        {
            if (str1[len] != str2[len])
            {
                return false;
            }
            len++;
        }
        return true;
    }
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        string str = string(), ans = string();
        for (int i = 0; i < str.length(); i++)
        {
            if (sentence[i] == ' ')
            {
                cout<<str<<endl
                string str2 = str;
                for (int j = 0; j < dictionary.size(); j++)
                {
                    if (isPrefix(str, dictionary[j]))
                    {
                        str2 = dictionary[j];
                    }
                }
                ans += str2;
                ans.push_back(' ');
                str = string();
            }
            else
            {
                str += sentence[i];
            }
        }
        string str2 = str;
        for (int j = 0; j < dictionary.size(); j++)
        {
            if (isPrefix(str, dictionary[j]))
            {
                str2 = dictionary[j];
            }
        }
        ans += str2;
        return ans;
    }
};