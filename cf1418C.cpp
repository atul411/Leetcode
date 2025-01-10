#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    int start = 0, mychance = 1;
    while (start < n) {
        if (mychance == 0 and start + 1 >= n) {
            break;
        } else if (mychance == 1 && start + 1 >= n) {
            ans += arr[start];
            break;
        }

        if (mychance == 0 and arr[start + 1] == 0) {
            start++;
            mychance = 1;
            continue;
            // cout << "first--\n";
        } else if (mychance == 0) {
            start += 2;
            mychance = 1;
            continue;
            // cout << "second--\n";
        }

        if (mychance == 1 and arr[start] == 0 and arr[start + 1] == 0) {
            start += 2;
            mychance = 0;
            // cout << "third--\n";
        } else if (mychance == 1 and arr[start] == 0) {
            start++;
            mychance = 0;
            // cout << "four--\n";
        } else if (mychance == 1 and arr[start + 1] == 0) {
            start += 2;
            mychance = 0;
            ans++;
            // cout << "five--\n";
        } else if (mychance == 1) {
            start++;
            mychance = 0;
            // cout << "six--\n";
            ans++;
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