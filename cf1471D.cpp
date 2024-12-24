#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int solve(vi& arr, int start, int end) {
    if (end - start <= 1) return 0;
    int mid = (end + start) >> 1;
    int lmax = *max_element(arr.begin() + start, arr.begin() + mid);
    int rmax = *max_element(arr.begin() + mid, arr.begin() + end);
    int ans = 0;
    if (lmax > rmax) {
        ans++;
        for (int i = 0; i < mid - start; i++) {
            swap(arr[start + i], arr[mid + i]);
        }
    }
    return solve(arr, start, mid) + solve(arr, mid, end) + ans;
}
void solve(vi arr, int m) {
    int ans = solve(arr, 0, m);
    if (is_sorted(arr.begin(), arr.end())) {
        cout << ans << "\n";
    } else {
        printf("-1\n");
    }
}
void test_case() {
    int m;
    cin >> m;
    vi arr(m);
    for (auto& a : arr) {
        cin >> a;
    }
    solve(arr, m);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}