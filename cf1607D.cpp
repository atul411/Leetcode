#include <bits/stdc++.h>
using namespace std;

bool comprator(pair<int, char> a, pair<int, char> b) {
    if (a.second != b.second) return a.second < b.second;
    if (a.second == 'B') {
        return a.first < b.first;
    }
    return a.first > b.first;
}

void test_case() {
    int n;
    cin >> n;
    vector<pair<int, char>> arr(n);
    for (auto &i : arr) {
        cin >> i.first;
    }

    for (auto &i : arr) {
        cin >> i.second;
    }
    sort(arr.begin(), arr.end(), comprator);
    vector<bool> ans(n, false);
    int start = 1, end = n;
    for (int i = 0; i < n; i++) {
        if (arr[i].second == 'B' and arr[i].first >= start) {
            ans[start - 1] = true;
            start++;
        } else if (arr[i].second == 'R' and arr[i].first <= end) {
            ans[end - 1] = true;
            end--;
        }
    }
    for (auto i : ans) {
        if (i == false) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}