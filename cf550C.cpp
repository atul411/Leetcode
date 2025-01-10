#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        int x = str[i] - '0';
        if (x % 8 == 0) {
            cout << "YES\n"
                 << x;
            return 0;
        }
        for (int j = i + 1; j < n; j++) {
            int y = str[j] - '0';
            y += x * 10;
            if (y % 8 == 0) {
                cout << "YES\n"
                     << y;
                return 0;
            }
            for (int k = j + 1; k < n; k++) {
                int z = y * 10 + (str[k] - '0');
                if (z % 8 == 0) {
                    cout << "YES\n"
                         << z;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}