#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll sum = 0;
    string str;
    cin >> str;
    unordered_map<int, int> umap;
    for (char ch : str) {
        sum += (ch - '0');
        if (ch - '0' == 2) {
            umap[2]++;
        }
        if (ch - '0' == 3) {
            umap[3]++;
        }
    }
    if (sum % 9 == 0) {
        printf("YES\n");
        return;
    }
    ll mod = 9 - sum % 9;
    if (mod % 2 != 0) {
        mod += 9;
    }
    while (umap[3] != 0 and mod >= 6) {
        umap[3]--;
        mod -= 6;
    }
    while (umap[2] != 0 and mod >= 2) {
        umap[2]--;
        mod -= 2;
    }
    if (mod == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}