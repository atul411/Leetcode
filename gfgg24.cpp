#include<bits/stdc++.h>
using namespace std;
int findMaxEdges(vector<int> arr[], int n)
{
    int color0 = 0, color1 = 0;
    queue<int> que1, que2;
    que1.push(1);
    while (que1.size() or que2.size())
    {
        color0 += que1.size();
        color1 += que2.size();
        if (que1.size())
        {
            while (que1.size())
            {
                int a = que1.front();
                for (auto i : arr[a])
                {
                    que2.push(i);
                }
                que1.pop();
            }
        }
        else
        {
            while (que2.size())
            {
                int a = que2.front();
                for (auto i : arr[a])
                {
                    que1.push(i);
                }
                que2.pop();
            }
        }
    }
    return color0 * color1 - n + 1;
}
int main()
{
    int n = 5;
    vector<int> adj[n + 1];
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(5);
    cout << findMaxEdges(adj, n);
    return 0;
}