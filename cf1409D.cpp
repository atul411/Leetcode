#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    int target;
    cin >> target;
    long long sum = 0, steps = 0;
    for (int i = 0; i < str.size(); i++) {
        sum += (str[i] - '0');
    }
    if (sum <= target) {
        printf("0\n");
        return;
    }
    int j = str.size() - 1, remainder = 0;
    while (j >= 0) {
        int x = str[j] - '0';
        if (x + remainder == 0) {
            j--;
            continue;
        } else if (x + remainder == 10) {
            remainder = 1;
            sum -= x;
        } else {
            sum -= x;
            steps += pow(10, str.size() - 1 - j) * (10 - x - remainder);
            remainder = 1;
        }
        if (sum + remainder <= target) {
            cout << steps << "\n";
            break;
        }
        j--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}