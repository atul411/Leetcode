#include<bits/stdc++.h>
using namespace std;
int solution(string str)
{
    int invalidopen = 0, invaliedclosed = 0;
    for (auto i : str)
    {
        if (i == '(')
        {
            invalidopen++;
        }
        else
        {
            if (invalidopen)
            {
                invalidopen--;
            }
            else
            {
                invaliedclosed++;
            }
        }
    }
    return str.size() - invalidopen - invaliedclosed;
}
int main()
{
    cout<<solution("()(((((()");
}