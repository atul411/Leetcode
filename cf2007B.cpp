#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)

void test_case(int t) {
    int n, m, l, r;
    char ch;
    ll mx, temp;
    while (t--) {
        cin >> n >> m;
        mx = -1;
        loop(i, n) {
            cin >> temp;
            mx = max(mx, temp);
        }
        loop(i, m) {
            cin >> ch >> l >> r;
            if (r < mx) {
                cout << mx << " ";
                continue;
            } else if (ch == '+' and l <= mx) {
                mx++;
            } else if (ch == '-' and l <= mx) {
                mx--;
            }
            cout << mx << " ";
        }
        cout << "\n";
    }
}
int main() {
    int t;
    cin >> t;
    test_case(t);
}