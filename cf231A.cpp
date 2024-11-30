#include<bits/stdc++.h>




using namespace std;

void solve(int n) {
    int ans = 0;
    while (n--) {
        int canSolve = 0, curr = 0;
        for (int i = 0; i < 3; i++) {
            cin >> curr;
            canSolve += curr;
        }
        if (canSolve >= 2) {
            ans++;
        }
    }
    cout << ans;
}

int main() {
    int n;
    cin >> n;
    solve(n);
}