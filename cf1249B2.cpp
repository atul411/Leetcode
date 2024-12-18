#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
        a--;
    }
    vector<int> ans(n);
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            vector<int> temp;
            int j = i;
            while (used[j] == false) {
                temp.push_back(j);
                used[j] = true;
                j = arr[j];
            }
            for (int el : temp) {
                ans[el] = temp.size();
            }
        }
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