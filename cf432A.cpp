#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, eligible = 0, temp;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (5 - temp >= k) {
            eligible++;
        }
    }
    cout << (eligible / 3);
}
