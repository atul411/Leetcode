#include<bits/stdc++.h>
using namespace std;

void fiboUsingTwoVar(int n)
{
    int x = 0, y = 1;

    cout << y << endl;
    for (int i = 2; i <= n; i++)
    {
        int c = y;
        int y = x + y;
        x = c;
        cout << y << endl;
    }
}

int main()
{
    fiboUsingTwoVar(30);
}