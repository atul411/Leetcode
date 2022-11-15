#include "library.h"

struct Triplet
{
    int startTime, endTime, profit;
};

bool comprator(Triplet a, Triplet b)
{
    return a.endTime < b.endTime;
}

int findLatestNonconflicting(vector<Triplet> arr, int n)
{
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j].endTime < arr[n].startTime)
            return j;
    }
    return -1;
}

int solution(vector<Triplet> arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    int x = solution(arr, n - 1);
    int i = findLatestNonconflicting(arr, n - 1);
    return max(x, arr[n].profit + solution(arr, i));
}

int solutionDp(vector<Triplet> arr, int n)
{

    int* table = new int[n];
    table[0] = arr[0].profit;
 
    for (int i = 1; i < n; i++) {
        
        int inclProf = arr[i].profit;
        int l = findLatestNonconflicting(arr, i);
        if (l != -1)
            inclProf += table[l];
 
        
        table[i] = max(inclProf, table[i - 1]);
    }
 
    int result = table[n - 1];
    delete[] table;
 
    return result;
}

int main()
{
    vector<Triplet> arr = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = arr.size();
    sort(arr.begin(), arr.end(), comprator);
    cout << solutionDp(arr, n);
}