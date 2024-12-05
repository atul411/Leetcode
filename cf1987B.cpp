#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test_case() {
    int n;
    ll ans = 1;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mx = arr[0];
    vector<int> temp;
    for (int i = 1; i < n; i++) {
        if (arr[i] < mx) {
            temp.push_back(mx - arr[i]);
        } else {
            mx = arr[i];
        }
    }
    if (temp.size() == 0) {
        cout << "0\n";
        return;
    }
    sort(temp.begin(), temp.end());
    ans = (temp.size() + 1) * temp[0];
    for (int i = 1; i < temp.size(); i++) {
        if (temp[i] != temp[i - 1]) {
            ans += (temp[i] - temp[i - 1]) * (temp.size() - i + 1);
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