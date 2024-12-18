#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, W, temp;
    cin >> n >> W;
    vector<int> arr(20, 0);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[log2(temp)]++;
    }
    int ans = 0, currWidth;
    bool found = true;
    while (found) {
        int currIndex = 19;
        ans++;
        currWidth = W;
        found = false;
        while (currWidth > 0 and currIndex >= 0) {
            if (arr[currIndex] > 0 and currWidth - pow(2, currIndex) >= 0) {
                arr[currIndex]--;
                currWidth -= pow(2, currIndex);
            } else {
                currIndex--;
            }
        }
        for (int i = 0; i < 20; i++) {
            if (arr[i] > 0) {
                found = true;
                break;
            }
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
