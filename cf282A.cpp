#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    int ans = 0;
    string str;
    while (n--) {
        cin >> str;
        if (str[1] == '+') {
            ans++;
        } else {
            ans--;
        }
    }
    cout << ans;
}

int main() {
    int n;
    cin >> n;
    solve(n);
}