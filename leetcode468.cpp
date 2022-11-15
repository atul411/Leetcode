#include <bits/stdc++.h>
using namespace std;

class Solution
{

    bool isValidIPV4(string str)
    {
        if (str.length() > 15)
        {
            return false;
        }
        int i = 0, dotCount = 0;
        string temp = string();
        while (i < str.length())
        {
            if (str[i] == '.')
            {
                dotCount++;
                if (temp.size() == 0)
                    return false;
                if (dotCount == 1 and temp.size() == 1 and temp == "0")
                    return false;
                if (temp.size() > 1 and (temp[0] == '0' or stoi(temp) > 255))
                {
                    return false;
                }
                temp = string();
            }
            else if (!isdigit(str[i]))
            {
                return false;
            }
            else
            {
                temp += str[i];
            }
            i++;
        }
        if (temp.size() == 0)
            return false;
        if (temp.size() > 1 and temp[0] == '0')
        {
            return false;
        }
        return dotCount == 3;
    }

    bool isValidIPV6(string str)
    {
        if (str.length() > 39)
        {
            return false;
        }
        int i = 0, dotCount = 0;
        string temp = string();
        while (i < str.length())
        {
            if (str[i] == ':')
            {
                dotCount++;
                if (temp.size() < 1 or temp.size() > 4)
                    return false;
                temp = string();
            }
            else if (!isalnum(str[i]))
            {
                return false;
            }
            else if (!isdigit(str[i]))
            {
                char ch = toupper(str[i]);
                if (ch < 'A' or ch > 'F')
                {
                    return false;
                }
                else
                {
                    temp += str[i];
                }
            }
            else
            {
                temp += str[i];
            }
            i++;
        }
        if (temp.size() < 1 or temp.size() > 4)
        {
            return false;
        }
        return dotCount == 7;
    }

public:
    string validIPAddress(string queryIP)
    {
        if (isValidIPV4(queryIP))
        {
            return "IPv4";
        }
        if (isValidIPV6(queryIP))
        {
            return "IPv6";
        }
        return "Neither";
    }
};

int main()
{
    Solution s;
    cout << s.validIPAddress("f:f:f:f:f:f:f:f");
}