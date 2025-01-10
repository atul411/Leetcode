#include <bits/stdc++.h>
using namespace std;

int main() {
    string recipe;
    cin >> recipe;
    
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    
    long long r;
    cin >> r;
    
    // Count the number of each ingredient needed for one hamburger
    int countB = count(recipe.begin(), recipe.end(), 'B');
    int countS = count(recipe.begin(), recipe.end(), 'S');
    int countC = count(recipe.begin(), recipe.end(), 'C');
    
    // Binary search for the maximum number of hamburgers
    long long left = 0, right = 1e13;
    while (left < right) {
        long long mid = (left + right + 1) / 2;
        
        long long neededB = max(0LL, mid * countB - nb);
        long long neededS = max(0LL, mid * countS - ns);
        long long neededC = max(0LL, mid * countC - nc);
        
        long long totalCost = neededB * pb + neededS * ps + neededC * pc;
        
        if (totalCost <= r) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    
    cout << left << endl;
    return 0;
}