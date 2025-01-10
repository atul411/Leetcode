#include <bits/stdc++.h>
using namespace std;

int smallesdivisor(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return i;
        }
        i++;
    }
    return n;
}

void test_case() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &a : arr) {
        cin >> a.first;
    }
    map<int, int> mp;
    int curr = 0;
    for (auto &i : arr) {
        i.second = smallesdivisor(i.first);
        if (mp.count(i.second) == 0) {
            mp[i.second] = ++curr;
        }
    }
    cout << curr << "\n";
    for (auto i : arr) {
        cout << mp[i.second] << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        test_case();
    }
}