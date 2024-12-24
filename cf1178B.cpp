#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<long long> arr;
    long long wCount = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'o') {
            arr.push_back(wCount);
        }
        if (i + 1 < str.size() and str[i] == str[i + 1] and str[i] == 'v') {
            wCount++;
        }
    }
    int end = arr.size() - 1;
    long long ans = 0;
    wCount = 0;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == 'o') {
            ans += arr[end--] * wCount;
        } else if (i - 1 >= 0 and str[i] == str[i - 1] and str[i] == 'v') {
            wCount++;
        }
    }
    cout << ans << "\n";
}