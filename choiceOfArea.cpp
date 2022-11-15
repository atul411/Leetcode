#include <bits/stdc++.h>
using namespace std;

// a = 10, b = 8;

// if a<=0 or b<= 0
// return 0;
// Area X (3, 2)
// Area Y (-5, -10)
// Area Z (-20, 5)
// return max of choose X Y Z + 1

int solution(int x, int y, int current, unordered_map<pair<int, int>, int> &mp)
{
    if (x <= 0 or y <= 0)
    {
        return 0;
    }

    if (mp.find(pair<int, int>(x, y)) != mp.end())
    {
        return mp[pair<int, int>(x, y)];
    }

    switch (current)
    {
    case 0:
    {

        mp[pair<int, int>(x, y)] = 1 + max(solution(x - 5, y - 10, 1, mp), solution(x - 20, y + 5, 2, mp));
        return mp[pair<int, int>(x, y)];
        break;
    }

    case 1:
    {
        mp[pair<int, int>(x, y)] = 1 + max(solution(x + 3, y + 2, 0, mp), solution(x - 20, y + 5, 2, mp));
        return mp[pair<int, int>(x, y)];
        break;
    }
    case 2:
    {
        mp[pair<int, int>(x, y)] = 1 + max(solution(x + 3, y + 2, 0, mp), solution(x - 5, y - 10, 1, mp));
        return mp[pair<int, int>(x, y)];
        break;
    }
    default:
    {
        break;
    }
    }
}


int abc(){
    unordered_map<pair<int, int>, int> umap;
    return max({solution(23, 10, 0, umap), solution(15, -2, 1, umap), solution(0, 13, 2, umap)});
}
int main()
{
    cout<<abc();
}