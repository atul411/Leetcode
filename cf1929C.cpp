#include <bits/stdc++.h>
using namespace std;

void debug(vector<int> a) {
    cout << "[   :  ] ";
    for (auto i : a) {
        cout << i << " ";
    }
    printf("\n");
}

bool checkDiverse(vector<int> &a) {
    int cnt = 0;
    for (auto i : a) {
        if (i) {
            cnt++;
        }
    }
    for (auto i : a) {
        if (i > cnt) {
            return false;
        }
    }
    return true;
}

void test_case() {
    string str;
    int n;
    cin >> n >> str;
    int start = 0, end = 0, ans = 0;
    vector<int> freq(10, 0);
    while (end < str.size()) {
        freq[str[end] - '0']++;
        while (!checkDiverse(freq)) {
            if(checkDiverse)
            freq[str[start] - '0']--;
            start++;
        }
        cout << str.substr(start, end - start + 1) << "\n";
        ans += (end - start + 1);
        end++;
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