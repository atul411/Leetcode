#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    x %= (1000000007);
    y %= (1000000007);
    int n;
    cin >> n;
    long long arr[] = {x, y, y - x, -x, -y, -y + x};
    int index = (n - 1) % 6;
    while (arr[index] < 0) {
        arr[index] += 1000000007;
    }
    cout << arr[index] % 1000000007;
}