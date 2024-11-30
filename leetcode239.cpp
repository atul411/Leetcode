#include<bits/stdc++.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
    cout<<distance(1,1,2,2);
}