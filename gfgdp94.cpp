#include<bits/stdc++.h>
using namespace std;
int solution(vi arr)
{
    int n = arr.size(), minSum = maxInteger, sumEndingHere = 0;
    for (int i = 0; i < n; i++)
    {
        sumEndingHere += arr[i];
        if (sumEndingHere < minSum)
        {
            minSum = sumEndingHere;
        }
        if (sumEndingHere > 0)
        {
            sumEndingHere = 0;
        }
    }
    return minSum;
}
int main()
{
    int a = solution({3, -4, 2, -3, -1, 7, -5});
    cout<<a;
}