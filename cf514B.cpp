#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double x0, y0;
    cin >> n >> x0 >> y0;
    map<double, int> mp;
    int vertical = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        if (x - x0 == 0) {
            vertical = 1;
        } else {
            double slope = (y - y0) / (x - x0);
            mp[slope]++;
        }
    }
    cout << mp.size() + vertical << "\n";
}