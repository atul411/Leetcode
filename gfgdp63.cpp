#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int k)
{
    int maxSum = INT_MIN, maximumEndingHere = 0, n = arr.size();
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maximumEndingHere += arr[j];
            if (maximumEndingHere > maxSum)
                maxSum = maximumEndingHere;
            if(maximumEndingHere<0){
                maximumEndingHere = 0;
            }
        }
    }
    return maxSum;
}

int main()
{
    cout<<solution({-1, 10, 20},2);
}