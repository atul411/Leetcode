#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> arr)
{
    int n = arr.size(), maxSum = minInteger, sumEndingHere = 0;
    for (int i = 0; i < n; i++)
    {
        sumEndingHere += arr[i];
        if (sumEndingHere > maxSum)
        {
            maxSum = sumEndingHere;
        }
        if (sumEndingHere < 0)
        {
            sumEndingHere = 0;
        }
    }
    return maxSum;
}
int main()
{
    cout << solution({-2, -3, 4, -1, -2, 1, 5, -3}) << endl;
}