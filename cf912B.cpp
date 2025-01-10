
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long ans = 1;
    if(k==1){
        cout<<n;
        return 0;
    }
    while (ans < n) {
        ans = ans * 2 + 1;
    }
    cout << ans;
}