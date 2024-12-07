#include <bits/stdc++.h>
using namespace std;
int caseno = 1;
void test_case() {
    int n, k, temp;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp % k]++;
    }
    if (mp[0]) {
        printf("0\n");
    } else if (k == 4 && mp[2] >= 2) {
        printf("0\n");
    } else if (k == 4 and mp[3]) {
        printf("1\n");
    } else if (k == 4 and mp[2] and mp[1]) {
        printf("1\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
