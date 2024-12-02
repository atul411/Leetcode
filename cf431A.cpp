#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr(4);
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    string str;
    cin >> str;
    for (char ch : str) {
        ans += arr[ch - '1'];
    }
    cout << ans;
}