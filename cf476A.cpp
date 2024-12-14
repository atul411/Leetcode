#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int twoCount = 0, oneCount = n, ans = INT_MAX;
    while (oneCount >= 0) {
        if ((oneCount + twoCount) % m == 0) {
            ans = min(ans, oneCount + twoCount);
        }
        oneCount -= 2;
        twoCount += 1;
    }
    if (ans == INT_MAX) {
        cout << "-1";
    } else {
        cout << ans;
    }
}