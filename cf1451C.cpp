#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    string str1, str2;
    vector<int> a(27), b(27);
    cin >> str1 >> str2;
    for (int i = 0; i < n; i++) {
        a[str1[i] - 'a']++;
        b[str2[i] - 'a']++;
    }
    bool bad = false;
    for (int i = 0; i < 26; i++) {
        if (a[i] < b[i] or (a[i] -= b[i]) % k) {
            bad = true;
        }
        a[i + 1] += a[i];
    }
    if (bad) {
        printf("No\n");
    } else {
        cout << "Yes" << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}