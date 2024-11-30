#include<bits/stdc++.h>
using namespace std;

class MagicDictionary
{
    vector<string> arr;

public:
    MagicDictionary()
    {
        arr.resize(0);
    }

    void buildDict(vector<string> dictionary)
    {
        arr = dictionary;
    }

    bool search(string searchWord)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (differBy1(arr[i], searchWord))
            {
                return true;
            }
        }
        return false;
    }

    bool differBy1(string str1, string str2)
    {
        if (str1.size() != str2.size())
        {
            return false;
        }
        int counter = 0;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != str2[i])
            {
                counter++;
            }
            if (counter > 1)
            {
                return false;
            }
        }
        return counter == 1;
    }
};
