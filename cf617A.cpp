#include<bits/stdc++.h>
using namespace std;

void solution(int n) {
    if (n <= 5) {
        cout << "1";
        return;
    }
    int ans = (n % 5 == 0) ? n / 5 : n / 5 + 1;
    cout << ans;
}
int main() {
    int n;
    cin >> n;
    solution(n);
}