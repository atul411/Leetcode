#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n + 1, 0);
    int u, v;
    for (int i = 0; i < n - 1; ++i) {
        cin >> u >> v;
        arr[u]++;
        arr[v]++;
    }
    if (arr[x] <= 1) {
        cout << "Ayush\n";
        return;
    }
    if (n % 2 != 0) {
        cout << "Ashish\n";
    } else {
        cout << "Ayush\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}