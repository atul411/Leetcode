#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<char>> &board)
    {
        if (board.size() == 1 or board[0].size() == 1)
            return;
        for (int i = 0; i < board.size(); i++)
        {
            dfs(board, i, 0);
            dfs(board, i, board[0].size() - 1);
        }
        for (int i = 0; i < board[0].size(); i++)
        {
            dfs(board, 0, i);
            dfs(board, board.size() - 1, i);
        }
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '#')
                {
                    board[i][j] = '0';
                }
                else
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
    void dfs(vector<vector<char>> &mat, int i, int j)
    {
        if (i < 0 or j < 0 or i >= mat.size() or j >= mat[0].size())
        {
            return;
        }
        if (mat[i][j] == 'X' or mat[i][j] == '#')
            return;
        mat[i][j] = '#';
        dfs(mat, i + 1, j);
        dfs(mat, i - 1, j);
        dfs(mat, i, j - 1);
        dfs(mat, i, j + 1);
    }
};


int main(){

}