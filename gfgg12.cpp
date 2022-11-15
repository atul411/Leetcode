#include "library.h"

vector<pii> ans;
void helper_function(vvi &arr, int x, int y, vvb &temp)
{
    temp[x][y] = true;
    if (x + 1 < arr.size() and arr[x + 1][y] <= arr[x][y] and temp[x + 1][y] == false)
    {
        helper_function(arr, x + 1, y, temp);
    }
    if (x - 1 >= 0 and arr[x - 1][y] <= arr[x][y] and temp[x - 1][y] == false)
    {
        helper_function(arr, x - 1, y, temp);
    }
    if (y + 1 < arr[0].size() and arr[x][y + 1] <= arr[x][y] and temp[x][y + 1] == false)
    {
        helper_function(arr, x, y + 1, temp);
    }
    if (y - 1 >= 0 and arr[x][y - 1] <= arr[x][y] and temp[x][y - 1] == false)
    {
        helper_function(arr, x, y - 1, temp);
    }
}
int solution(vvi &arr, vvb &temp)
{
    int x = -1, y = -1, num = minInteger;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] > minInteger and temp[i][j] == false)
            {
                x = i;
                y = j;
                minInteger = arr[i][j];
            }
        }
    }
    if (x != -1 and y != -1)
    {
        helper_function(arr, x, y, temp);
        ans.push_back({x, y});
        return 1 + solution(arr, temp);
    }
    return 0;
}

int main()
{
    vvi arr = {{3, 3}, {1, 1}};
    vvb temp = {{false, false}, {false, false}};
    solution(arr, temp);
    for (auto i : ans)
    {
        cout << i.first << "\t" << i.second << endl;
    }
}