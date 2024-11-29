#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<string> st;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    if(st.count(board[i][j] + " in row " + i) or st.count(board[i][j] + " in col " + j) or st.count(board[i][j] + " in block " + i/3 + "==" + j/3))
                }
            }
        }
    }
};


int main()
{
}
