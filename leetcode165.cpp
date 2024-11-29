#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compare(string s1, string s2, int start1 = 0, int start2 = 0)
    {
        if (start1 >= s1.size() or start2 >= s2.size()) 
        {
            
            if (start1 >= s1.size() and start2 >= s2.size())
                return 0;

            
            if (start1 >= s1.size())
            {
                for (int j = start2; j < s2.size(); j++)
                    if (s2[j] != '0' and s2[j] != '.') 
                        return -1;

                return 0;
            }

            
            if (start2 >= s2.size())
            {
                for (int j = start1; j < s1.size(); j++)
                    if (s1[j] != '0' and s1[j] != '.') 
                        return 1;

                return 0;
            }
        }

        
        string x = "";
        int i = start1;
        while (i < s1.size() and isdigit(s1[i]))
            x += s1[i++];

        int num1 = stoi(x);

        
        string y = "";
        int j = start2;
        while (j < s2.size() and isdigit(s2[j]))
            y += s2[j++];

        int num2 = stoi(y);

        
        if (num1 < num2)
            return -1;
        else if (num1 > num2)
            return 1;

        return compare(s1, s2, i + 1, j + 1); 
    }
    int compareVersion(string version1, string version2)
    {

        return compare(version1, version2);
    }
};