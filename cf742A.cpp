#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n == 0) {
        return 1;
    }
    int arr[4] = {8, 4, 2, 6};
    return arr[(n - 1) % 4];
}

int main() {
    int n;
    cin >> n;
    cout << solve(n) << "\n";
}