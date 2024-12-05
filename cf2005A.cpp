#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)
void test_case(int t) {
    string ans, temp = "aeiou";
    int n;
    while (t--) {
        ans = "";
        cin >> n;
        loop(i, n) {
            if (n - ans.size() >= 5) {
                ans += temp;
            } else {
                ans += temp.substr(0, n - ans.size());
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}