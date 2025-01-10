#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int p, q, L, R;
    cin >> p >> q >> L >> R;
    vector<pair<int, int>> first(p), second(q);
    for (int i = 0; i < p; i++) {
        cin >> first[i].first >> first[i].second;
    }
    for (int i = 0; i < q; i++) {
        cin >> second[i].first >> second[i].second;
    }
    int ans = 0;
    for (int i = L; i <= R; i++) {
        for (int j = 0; j < q; j++) {
            int start = second[j].first + i, end = second[j].second + i;
            bool found = false;
            for (int k = 0; k < p; k++) {
                int a = max(start, first[k].first), b = min(end, first[k].second);
                if (a <= b) {
                    found = true;
                    break;
                }
            }
            if (found) {
                ans++;
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    test_case();
}