#include<bits/stdc++.h>
using namespace std;
vector<string> solution(string str1, string str2, int i, int j)
{
    vector<string> vect;
    if (i < 0 or j < 0)
    {
        return vect;
    }
    if (str1[i] == str2[j])
    {
        string str = str1.substr(i, 1);
        vect = solution(str1, str2, i - 1, j - 1);
        for (auto &a : vect)
        {
            a += str;
        }
        return vect;
    }
}
int main()
{
}