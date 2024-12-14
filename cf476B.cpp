#include <bits/stdc++.h>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    int diffPlus = 0, diffMinus = 0;
    for (int i = 0; i < first.size(); i++) {
        if (second[i] == '?' and first[i] == '+') {
            diffPlus++;
        } else if (second[i] == '?' and first[i] == '-') {
            diffMinus++;
        } else if (second[i] != first[i]) {
            printf("%0.6f", 0.f);
            return 0;
        }
    }
    long long ans = 1;
    if (diffPlus >= 1) {
        long long temp = 1, x = 1;
        for (int i = 0; i < diffPlus; i++) {
            temp *= (diffPlus - i);
            x *= (diffPlus + diffMinus - i);
        }
        ans *= (x) / temp;
    }
    if (diffMinus >= 1) {
        long long temp = 1, x = 1;
        for (int i = 0; i < diffMinus; i++) {
            temp *= (diffPlus - i);
            x *= (diffMinus - i);
        }
        ans *= (x) / temp;
    }
    double a = 1.0 / ans;
    printf("%0.6f", a);
}
