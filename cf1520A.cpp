#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string str;
    int len;
    vector<int> arr(26);
    while (t--) {
        cin >> len;
        cin >> str;
        fill_n(&arr[0], 26, 0);
        bool suspecious = false;
        arr[str[0] - 'A']++;
        for (int i = 1; i < str.size(); i++) {
            if (str[i] != str[i - 1] and arr[str[i] - 'A'] != 0) {
                suspecious = true;
            }
            arr[str[i] - 'A']++;
        }
        if (suspecious) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}