#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, sum = 0, temp;
    cin >> n;
    vector<long long> arr(n);
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        sum += arr[i];
    }
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        temp = sum - arr[i];
        mp[arr[i]]--;
        if (temp % 2 == 0 and mp[temp / 2]) {
            ans.push_back(i);
        }
        mp[arr[i]]++;
    }
    cout << ans.size() << "\n";
    for (auto i : ans) {
        cout << i + 1 << " ";
    }
    if (ans.size()) {
        printf("\n");
    }
}