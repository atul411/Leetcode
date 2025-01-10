#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    queue<ll> que;
    que.push(1);
    bool running = true;
    while (running and que.size()) {
        auto front = que.front();
        que.pop();
        if (front == n) {
            cout << "YES\n";
            running = false;
        }
        if (front * a <= n) {
            que.push(front * a);
        }
        if (front + b <= n) {
            que.push(front + b);
        }
    }
    if (running) {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}