#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n, a, b;
    while (t--) {
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int up = 0, right = 0;
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'N') {
                up++;
            } else if (str[i] == 'S') {
                up--;
            } else if (str[i] == 'E') {
                right++;
            } else {
                right--;
            };
            arr.push_back({up, right});
        }
        // int mxright = 
    }
}

int main() {
    int t;
    cin >> t;
}