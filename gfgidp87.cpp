#include "library.h"

vector<string> arr;
int dp[10][10];

int solution(vi mat, int i, int j)
{
    if (i > j)
        return 0;
    if (i == j)
    {
        arr.push_back("beg");
        return (i + mat.size() - j) * mat[i];
    }
    if ((i + mat.size() - j) * mat[i] + solution(mat, i + 1, j) >= (i + mat.size() - j) * mat[j] + solution(mat, i, j - 1))
    {
        arr.push_back("beg");
        return (i + mat.size() - j) * mat[i] + solution(mat, i + 1, j);
    }
    else
    {
        arr.push_back("end");
        return (i + mat.size() - j) * mat[j] + solution(mat, i, j - 1);
    }
}

int main()
{
    cout<<solution({ 2, 4, 6, 2, 5 }, 0, 4)<<endl;
    for(auto i: arr){
        cout<<i<<"   ";
    }
}