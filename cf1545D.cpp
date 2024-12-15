#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, i = 2;
    cin >> n;
    long long store = n;
    unordered_map<long long, long long> mp;
    while (i * i <= n) {
        if (n % i == 0) {
            mp[i]++;
            n /= i;
        } else {
            i++;
        }
    }
    if (n != 1) {
        mp[n]++;
    }
    long long number, freq = 1;
    for (auto i : mp) {
        if (i.second >= freq) {
            freq = i.second;
            number = i.first;
        }
    }
    cout << freq << "\n";
    for (int i = 0; i < freq - 1; i++) {
        cout << number << " ";
    }
    if (n == 1) {
        cout << number << "\n";
    } else {
        cout << (long long)((store) / pow(number, freq - 1)) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}