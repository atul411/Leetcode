#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k, temp;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (abs(temp - i - 1) % k != 0) {
            arr.push_back({temp, i + 1});
        }
    }
    if (arr.size() == 0) {
        cout << "0\n";
        return;
    }
    if (arr.size() > 2 or abs(arr[0].first - arr[1].second) % k != 0 or
        abs(arr[1].first - arr[0].second) % k != 0) {
        cout << "-1\n";
        return;
    } else {
        cout << "1\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}