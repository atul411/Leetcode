#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {
        int ans = INT_MIN;
        for (int i = 0; i < houses.size(); i++)
        {
            int nearestHeater = INT_MAX;
            for (int j = 0; j < heaters.size(); j++)
            {
                nearestHeater = min(nearestHeater, abs(heaters[j] - houses[j]));
            }
            ans = max(ans, nearestHeater);
        }
        return ans;
    }
};

class Solution
{
    double radius, x, y;

public:
    double RanDomNumber()
    {
        double randumNumber = (double)rand() / RAND_MAX;
        return sqrt(randumNumber) * radius;
    }
    double RanDomAngle()
    {
        double randumNumber = (double)rand() / RAND_MAX;
        return randumNumber * 2 * M_PI;
    }
    Solution(double radius, double x_center, double y_center)
    {
        srand(time(0));
        this->radius = radius;
        this->x = x_center;
        this->y = y_center;
    }
    vector<double> randPoint()
    {
        double theta = RanDomAngle();
        return vector<double>({x + RanDomNumber() * cos(theta), y + RanDomNumber() * sin(theta)});
    }
};