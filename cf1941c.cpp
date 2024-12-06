#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, ans = 0;
    string str;
    cin >> n;
    cin >> str;
    if (str.size() < 3) {
        printf("0\n");
        return;
    }
    for (int i = 0; i < n - 2; i++) {
        string temp = str.substr(i, 3);
        string temp2 = str.substr(i, min(5, n - i));
        if (temp2 == "mapie") {
            ans++;
            str[i+2] = '0'; 
        } else if (temp == "map" or temp == "pie") {
            ans++;
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