#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1, false);
    int ans = 0, curr = 1;
    vector<pii> arr2(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr2[i].first >> arr2[i].second;
    }
    while (curr < n) {
        arr[1] = true;
        ans++;
        for (int i = 0; i < n - 1; i++) {
            int x = arr2[i].first, y = arr2[i].second;
            if (arr[x] == false and arr[y] == false) {
                continue;
            }
            if (arr[x] == false or arr[y] == false) {
                curr++;
                arr[x] = true;
                arr[y] = true;
            }
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