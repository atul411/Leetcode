#include<bits/stdc++.h>
using namespace std;

int solution(int sum, vector<int> arr, int n)
{
    if(n<=0 or sum<0)
        return 0;
    if(sum==0)
        return 1;
    return solution(sum, arr, n-1) + solution(sum-arr[n-1], arr, n);
}

int main()
{
    cout<<solution(20, {3,5,10}, 3);
}