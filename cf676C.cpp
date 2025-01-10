#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, temp;
    cin >> n >> k;
    string str;
    cin >> str;
    temp = k;
    int ans = 0, start = 0, end = 0, curr = 0;
    while (end < n) {
        if (str[end] != 'a') {
            temp--;
        }

        while (temp < 0) {
            if (str[start] == 'b') {
                temp++;
            }
            start++;
        }
        ans = max(ans, end - start + 1);
        end++;
    }
    temp = k;
    end = 0, start = 0;
    while (end < n) {
        if (str[end] != 'b') {
            temp--;
        }

        while (temp < 0) {
            if (str[start] == 'a') {
                temp++;
            }
            start++;
        }

        ans = max(ans, end - start + 1);
        end++;
    }
    cout << ans << "\n";
}

int main() {
    solve();
}