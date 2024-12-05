#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        umap[temp]++;
    }
    bool win = false;
    for (auto v : umap) {
        if (v.second % 2 != 0) {
            win = true;
        }
    }
    if (win) {
        printf("YES \n");
    } else {
        printf("NO \n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}