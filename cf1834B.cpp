#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string L, R;
    cin >> L >> R;
    int ans = 0;
    if (L.size() == R.size()) {
        ans = abs((L[0] - '0') - (R[0] - '0')) + 9 * (L.size() - 1);
    } else if (L.size() > R.size()) {
        if (L[1] != 9){
            
        }
            ans = (L[0] - '0' - 1) + 9 * (L.size() - 1);
    } else {
        ans = (R[0] - '0' - 1) + 9 * (R.size() - 1);
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