#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> umap;
int f(int x)
{
    if (x == 0)
        return 0;
    if (umap.count(x))
        return umap[x];
    return f(x / 2) + x;
}
vi solution(vi arr)
{
    int n = arr.size();
    vi temp(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (umap.find(arr[i]) != umap.end())
        {
            temp[i] = umap[arr[i]];
        }
        else
        {
            umap[arr[i]] = f(arr[i]);
            temp[i] = umap[arr[i]];
        }
    }
    return temp;
}
int main()
{
    vi a = solution({ 8, 6,11,1241,4523,234,2134,23,13 });
    for (auto i : a)
    {
        cout << i << " ";
    }
}