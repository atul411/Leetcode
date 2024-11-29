#include <bits/stdc++.h>
using namespace std;

class MyCalendarTwo
{
    vector<pair<int, int>> arr;

public:
    MyCalendarTwo()
    {
    }

    bool book(int start, int end)
    {
        int count = 0;
        for (auto a : arr)
        {
            if ((a.first <= start and start < a.second) or (a.first <= end and end < a.second) or (start <= a.first and end >= a.second))
            {
                count++;
                if (count == 2)
                {
                    break;
                }
            }
        }
        if (count == 2){
            return false;
        }
        arr.emplace_back(start, end);
        return true;
    }
};

