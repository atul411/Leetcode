#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lastSum = 0, curr = 0;
    while (lastSum <= n) {
        curr++;
        lastSum += curr * (curr + 1) / 2;
    }
    cout << (curr - 1);
}