#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string temp, first, second;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp]++;
        if (first.empty()) {
            first = temp;
        } else if (second.empty() and temp != first) {
            second = temp;
        }
    }
    if (mp[first] > mp[second]) {
        cout << first;
    } else {
        cout << second;
    }
}