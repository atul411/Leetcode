#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    int n;
    long long sum = 0, temp, ans = 0;
    cin >> n;
    unordered_map<ll, int> umap;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        umap[temp] = i;
        sum += temp;
        if (sum % 2 == 0 and umap.find(sum / 2) != umap.end()) {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}