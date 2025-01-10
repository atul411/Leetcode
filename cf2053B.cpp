#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1e6 + 6);

void test_case() {
    int n, start, end;
    map<int, int> mp;
    cin >> n;
    vector<pair<int, int>> arr(n);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        arr[i] = {start, end};
        mx = max(mx, end);
        mn = min(mn, start);
        if (start == end) {
            mp[start]++;
        }
    }
    int last = mx + 1;
    for (int i = mx + 1; i >= mn; i--) {
        if (mp[i] == 0) {
            last = i;
        }
        dp[i] = last;
    }
    string str;
    for (int i = 0; i < n; i++) {
        start = arr[i].first, end = arr[i].second;
        if (start == end and mp[start] > 1) {
            str.push_back('0');
            continue;
        } else if (start == end) {
            str.push_back('1');
            continue;
        }
        start = arr[i].first, end = arr[i].second;
        int next = dp[start];
        if (next <= end) {
            str.push_back('1');
        } else {
            str.push_back('0');
        }
    }
    cout << str << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}