#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 1, temp, curr = -1;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp % m == 0) {
            temp /= m;
        } else {
            temp /= m;
            temp++;
        }
        if (temp >= curr) {
            ans = i;
            curr = temp;
        }
    }
    cout<<ans<<"\n";
}