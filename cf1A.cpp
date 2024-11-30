#include<bits/stdc++.h>




using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;
    long long horizontal = ceil(n / a), vertical = ceil(m / a);
    cout << (horizontal * vertical);
}