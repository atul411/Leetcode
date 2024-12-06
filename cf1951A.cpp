#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    int n, together = 0, away = 0;
    cin >> str;
    if (str.size() == 1) {
        str[0] == '1' ? printf("NO\n") : printf("YES\n");
        return;
    }
    if (str[0] == '1' and str[1] == '1') {
        together = 2;
    } else if (str[0] == '1') {
        away = 1;
    } else {
        together = 1;
    }
    for (int i = 2; i < n; i++) {
        if (str[i] == '1' and str[i - 1] == '1') {
            together += 1;
        } else if(str[i] == '1' and str[i-1] == '0'){
                
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case()
    }
}