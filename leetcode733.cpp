#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int rows = image.size(), column = image[0].size();
        helper(image, sr, sc, color, rows, column);
        return image;
    }
    void helper(vector<vector<int>> &temp, int x, int y, int color, int rows, int column)
    {
        if (x < 0 or x >= rows or y < 0 or y >= column)
            return;
        int oldvalue = temp[x][y];
        temp[x][y] = color;
        if (x - 1 >= 0 and temp[x - 1][y] != color and temp[x - 1][y] == oldvalue)
        {
            helper(temp, x - 1, y, color, rows, column);
        }
        if (x + 1 < rows and temp[x + 1][y] != color and temp[x + 1][y] == oldvalue)
        {
            helper(temp, x + 1, y, color, rows, column);
        }
        if (y - 1 >= 0 and temp[x][y - 1] != color and temp[x][y - 1] == oldvalue)
        {
            helper(temp, x, y - 1, color, rows, column);
        }
        if (y + 1 >= 0 and temp[x][y + 1] != color and temp[x][y + 1] == oldvalue)
        {
            helper(temp, x, y + 1, color, rows, column);
        }
    }
};