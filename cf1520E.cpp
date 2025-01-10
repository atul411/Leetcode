#include <bits/stdc++.h>
using namespace std;


/**
essenitally they all should be moved around median 


 */

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<long long> arr;
    for (int i = 1; i <= n; i++) {
        if (str[i - 1] == '*') {
            arr.push_back(i);
        }
    }
    long long ans = 0, median = arr.size() / 2;
    for (long long i = 0; i < arr.size(); i++) {
        if (i != median) {
            int dis = abs(arr[i] - arr[median]) - 1;
            dis -= (abs(median - i) - 1LL);
            ans += dis;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}