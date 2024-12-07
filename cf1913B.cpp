#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    int arr[] = {0, 0};
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        arr[str[i] - '0']++;
    }
    for (int i = 0; i < str.size(); i++) {
        if (arr[1 - (str[i] - '0')] == 0) {
            cout << str.size() - i << "\n";
            return;
        }
        arr[1 - (str[i] - '0')]--;
    }
    cout << "0\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}