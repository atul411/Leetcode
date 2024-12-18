#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, first, second;
    cin >> n >> m;
    vector<int> arr(n + 1, 0);
    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        arr[first]++;
        arr[second]++;
    }
    int center = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            center = i;
            break;
        }
    }
    cout << n - 1 << "\n";
    for (int i = 1; i <= n; i++) {
        if (i != center) {
            cout << center << " " << i << "\n";
        }
    }
}