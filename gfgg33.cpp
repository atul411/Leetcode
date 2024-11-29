#include <bits/stdc++.h>
using namespace std;


bool dfs(int residue, int curStep, int wt[], int arr[],
         int N, int steps)
{
    
    
    if (curStep > steps)
        return true;

    
    
    for (int i = 0; i < N; i++)
    {
        
        if (arr[i] > residue && arr[i] != wt[curStep - 1])
        {
            
            
            wt[curStep] = arr[i];
            if (dfs(arr[i] - residue, curStep + 1, wt,
                    arr, N, steps))
                return true;
        }
    }

    
    return false;
}



void printWeightsOnScale(int arr[], int N, int steps)
{
    int wt[steps];

    
    
    if (dfs(0, 0, wt, arr, N, steps))
    {
        for (int i = 0; i < steps; i++)
            cout << wt[i] << " ";
        cout << endl;
    }
    else
        cout << "Not possible\n";
}

bool solution(int residue, int curStep, int wt[], int arr[], int N, int steps)
{
    if (curStep > steps)
    {
        return true;
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > residue and arr[i] != wt[curStep - 1])
        {
            wt[curStep] = arr[i];
            if (dfs(arr[i] - residue, curStep + 1, wt, arr, N, steps + 1))
            {
                return true;
            }
            wt[curStep] = -1;
        }
    }
    return false;
}
void printWeightsOnScale1(int arr[], int N, int steps)
{
    int wt[steps];

    
    
    if (solution(0, 0, wt, arr, N, steps))
    {
        for (int i = 0; i < steps; i++)
            cout << wt[i] << " ";
        cout << endl;
    }
    else
        cout << "Not possible\n";
}


int main()
{
    int arr[] = {2, 3, 5, 6};
    int N = sizeof(arr) / sizeof(int);

    int steps = 10;
    printWeightsOnScale1(arr, N, steps);
    return 0;
}
