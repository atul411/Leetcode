#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (str.size() <= 2) {
        cout << "NO\n";
        return;
    }
    vector<vector<int>> graph(26, vector<int>(26));
    for (int i = 0; i < n - 1; i++) {
        if (graph[str[i] - 'a'][str[i + 1] - 'a']) {
            cout << "YES\n";
            return;
        }
        if (i > 0) {
            graph[str[i - 1] - 'a'][str[i] - 'a'] = 1;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}