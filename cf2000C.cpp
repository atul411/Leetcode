#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    string str;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (str.length() != n) {
            printf("NO\n");
        }
        unordered_map<int, char> mp1;
        unordered_map<char, int> mp2;
        bool solved = true;
        for (int i = 0; i < n; i++) {
            if (mp1.count(arr[i]) or mp2.count(str[i])) {
                solved = false;
                break;
            }
            if (!mp1.count(arr[i]) and !mp2.count(str[i])) {
                mp1[arr[i]] = str[i];
                mp2[str[i]] = arr[i];
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}