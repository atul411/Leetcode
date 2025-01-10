#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<bool> available(s + 1, true);
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i++) {
        arr[i] = 1;
    }
    arr[n - 1] = (s - n + 1);
    int last = 0;
    for (int i = 0; i < n; i++) {
        available[arr[i] + last] = false;
        last += arr[i];
        arr[i] = last;
    }
    for (int i = n - 2; i >= 0; i--) {
        available[arr[n - 1] - arr[i]] = false;
    }
    bool found = false;
    int k = -1;
    for (int i = 0; i <= s; i++) {
        if (available[i] == true and available[s - i] == true) {
            found = true;
            k = i;
        }
    }
    if (found) {
        printf("YES\n");
        for (int i = 0; i < n - 1; i++) {
            cout << 1 << " ";
        }
        cout << (s - n + 1) << "\n";
        printf("%d", k);
    } else {
        printf("NO\n");
    }
}

int main() {
    solve();
}