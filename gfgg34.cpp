#include<bits/stdc++.h>
using namespace std;
struct Triplet
{
    int dist, x, y;
};
vvl solution(vvi matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vvi arr(n, vi(m, inf));
    vvb visited(n, vb(m, false));
    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    arr[x][y] = 0;
    pqii temp;
    visited[x][y] = true;
    priority_queue<Triplet, vector<Triplet>, greater<Triplet>> pq;
    pq.push({0, x, y});
    while (pq.size())
    {
        Triplet front = pq.top();
        pq.pop();
        if (front.x - 1 >= 0 and (matrix[front.x - 1][front.y] == 3 or matrix[front.x - 1][front.y] == 2))
        {
            if (arr[front.x - 1][front.y] > front.dist + 1)
            {
                arr[front.x - 1][front.y] = front.dist + 1;
            }
            if (!visited[front.x - 1][front.y])
            {
                visited[front.x - 1][front.y] = true;
                pq.push({arr[front.x - 1][front.y], front.x - 1, front.y});
            }
        }
        if (front.x + 1 < n and (matrix[front.x + 1][front.y] == 3 or matrix[front.x + 1][front.y] == 2))
        {
            if (arr[front.x + 1][front.y] > front.dist + 1)
            {
                arr[front.x + 1][front.y] = front.dist + 1;
            }
            if (!visited[front.x + 1][front.y])
            {
                visited[front.x + 1][front.y] = true;
                pq.push({arr[front.x + 1][front.y], front.x + 1, front.y});
            }
        }
        if (front.x - 1 >= 0 and (matrix[front.x - 1][front.y] == 3 or matrix[front.x - 1][front.y] == 2))
        {
            if (arr[front.x - 1][front.y] > front.dist + 1)
            {
                arr[front.x - 1][front.y] = front.dist + 1;
            }
            if (!visited[front.x - 1][front.y])
            {
                visited[front.x - 1][front.y] = true;
                pq.push({arr[front.x - 1][front.y], front.x - 1, front.y});
            }
        }
        if (front.x - 1 >= 0 and (matrix[front.x - 1][front.y] == 3 or matrix[front.x - 1][front.y] == 2))
        {
            if (arr[front.x - 1][front.y] > front.dist + 1)
            {
                arr[front.x - 1][front.y] = front.dist + 1;
            }
            if (!visited[front.x - 1][front.y])
            {
                visited[front.x - 1][front.y] = true;
                pq.push({arr[front.x - 1][front.y], front.x - 1, front.y});
            }
        }
    }
}
int main()
{
    vvi matrix;
}