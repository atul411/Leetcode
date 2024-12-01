#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    while (n--) {
        int first, second;
        cin >> first >> second;
        if (first >= second) {
            swap(first, second);
        }
        int ans = first;
        while (ans % first != ans % second) {
            ans++;
        }
        cout<<ans<<"\n";
    }
}

int main() {
    int t;
    cin >> t;
    solve(t);
}