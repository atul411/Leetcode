#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>

void test_case() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &x : arr) cin >> x;
    if (arr[n - 1] == 1) {
        printf("NO\n");
        return;
    }
    printf("YES\n");
    vvi parts;
    vi curr;
    for (int i = 0; i < n; i++) {
        curr.push_back(arr[i]);
        if (arr[i] == 0) {
            parts.push_back(curr);
            curr.clear();
        }
    }
    vi ans;
    for (int i = parts.size() - 1; i >= 0; i--) {
        for (int j = 0; j < parts[i].size() - 1; j++) {
            ans.push_back(0);
        }
        ans.push_back(parts[i].size()-1);
    }
    for (auto i : ans) {
        cout << i << " ";
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