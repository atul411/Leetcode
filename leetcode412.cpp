#include "library.h"

class Solution
{
    bool buzz(int i)
    {
        return i % 5 == 0;
    }

    bool fizz(int i)
    {
        return i % 3 == 0;
    }

    bool fizbuzz(int i)
    {
        return fizz(i) and buzz(i);
    }

public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {
            if (fizbuzz(i))
            {
                ans.push_back("FizzBuzz");
            }
            else if (fizz(i))
            {
                ans.push_back("Fizz");
            }else if(buzz(i)){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(i));
            }
        }
    }
};