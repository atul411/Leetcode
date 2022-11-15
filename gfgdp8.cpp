#include "library.h"

void solution(vvl arr)
{
    int n = arr.size();
    vvl mat = arr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "\t\t";
        }
        cout << endl;
    }
}
int main()
{
    solution({{0, 5, inf, 10},
              {inf, 0, 3, inf},
              {inf, inf, 0, 1},
              {inf, inf, inf, 0}});
}