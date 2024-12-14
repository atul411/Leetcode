#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> umap;

void test_case() {
    string str;
    cin >> str;
    int a = umap[str];
    if (a == 0) {
        umap[str]++;
        printf("OK\n");
    } else {
        umap[str]++;
        str += to_string(a);
        cout << str << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}