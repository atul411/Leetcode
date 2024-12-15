#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    vector<int> ans;
    ans.push_back(arr[0]);
    int last = arr[0], curr;
    for (int i = 1; i < n - 1; i++) {
        curr = arr[i];
        if (curr > last and curr > arr[i + 1]) {
            ans.push_back(curr);
            last = curr;
        } else if (curr < last and curr < arr[i + 1]) {
            ans.push_back(curr);
            last = curr;
        }
    }
    ans.push_back(arr[n - 1]);
    printf("%lu\n", ans.size());
    for (auto i : ans) {
        printf("%d ", i);
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