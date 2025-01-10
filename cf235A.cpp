#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(n);
    for (int i = n - 1; i >= 1; i--) {
        if (gcd(i, ans.back()) == 1) {
            ans.push_back(i);
        }
    }
}