#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int top = 0, right = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'N') {
            top++;
        } else if (str[i] == 'S') {
            top--;
        }

        if (str[i] == 'E') {
            right++;
        } else if (str[i] == 'W') {
            right--;
        }
    }
    if (right % 2 != 0 or top % 2 != 0) {
        printf("NO\n");
        return;
    }
    string ans;
    right = right / 2;
    top = top / 2;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'N') {
            if (top > 0) {
                ans.push_back('H');
                top--;
            } else {
                ans.push_back('R');
            }
        } else if (str[i] == 'S') {
            if (top < 0) {
                ans.push_back('H');
                top++;
            } else {
                ans.push_back('R');
            }
        }

        if (str[i] == 'E') {
            if (right > 0) {
                ans.push_back('H');
                right--;
            } else {
                ans.push_back('R');
            }
        } else if (str[i] == 'W') {
            if (right < 0) {
                ans.push_back('H');
                right++;
            } else {
                ans.push_back('R');
            }
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