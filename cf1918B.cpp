#include <bits/stdc++.h>
using namespace std;

bool comprator(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

void test_case() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), comprator);
    for (auto i : arr) {
        cout << i.first << " ";
    }
    printf("\n");
    for (auto i : arr) {
        cout << i.second << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}