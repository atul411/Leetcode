#include <bits/stdc++.h>
using namespace std;

int main() {
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double times = dist / (2.0 * r);
    if (ceil(times) == floor(times)) {
        cout << times;
    } else {
        cout << floor(times + 1);
    }
}