#include "library.h"

class Solution
{
    void dfs(vector<vector<char>> &board, int i, int j)
    {
        board[i][j] = '.';
        if (i - 1 >= 0 and board[i - 1][j] == 'X')
        {
            dfs(board, i - 1, j);
        }
        if (i + 1 < board.size() and board[i + 1][j] == 'X')
        {
            dfs(board, i + 1, j);
        }
        if (j - 1 >= 0 and board[i][j - 1] == 'X')
        {
            dfs(board, i, j - 1);
        }
        if (j + 1 < board[0].size() and board[i][j + 1] == 'X')
        {
            dfs(board, i, j + 1);
        }
    }

public:
    int countBattleships(vector<vector<char>> &board)
    {
        int ans = 0;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 'X')
                {
                    ans++;
                    dfs(board, i, j);
                }
            }
        }
        return ans;
    }
};