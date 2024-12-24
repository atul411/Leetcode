#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> mp;

bool solve(int n) {
    if (n == 0) return true;
    if (n < 33) return false;
    if (mp.find(n) != mp.end()) return mp[n];

    if (n % 33 == 0) {
        mp[n] = true;
        return true;
    }

    string str = to_string(n);
    string temp = "";
    for (int i = 0; i < str.size() - 1; ++i) {
        if (str[i] == '3' && str[i + 1] == '3') {
            temp = str.substr(0, i) + str.substr(i + 2);
            break;
        }
    }
    if (temp == "") {
        mp[n] = solve(n - 33);
    } else {
        int number = stoi(temp);
        mp[n] = solve(number);
    }
    return mp[n];
}

void test_case() {
    int n;
    cin >> n;
    if (solve(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
    return 0;
}