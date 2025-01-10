#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<int> st0, st1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int newPos = st0.size() + st1.size();
        if (str[i] == '0') {
            if (st1.empty()) {
                st0.push(newPos);
            } else {
                int top = st1.top();
                st1.pop();
                st0.push(top);
                newPos = top;
            }
        } else {
            if (st0.empty()) {
                st1.push(newPos);
            } else {
                int top = st0.top();
                st0.pop();
                st1.push(top);
                newPos = top;
            }
        }
        arr[i] = newPos;
    }
    cout << st1.size() + st0.size() << "\n";
    for (auto i : arr) {
        cout << (i + 1) << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}