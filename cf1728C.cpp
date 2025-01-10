#include <bits/stdc++.h>
using namespace std;

int digit_count(int n) {
    int ans = 0;
    while (n) {
        ans++;
        n /= 10;
    }
    return ans;
}
void test_case() {
    int n;
    cin >> n;
    priority_queue<int> pq1, pq2;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        pq1.push(temp);
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        pq2.push(temp);
    }
    int ans = 0;
    while (pq1.size() > 0) {
        auto top1 = pq1.top();
        pq1.pop();
        auto top2 = pq2.top();
        pq2.pop();
        if (top1 > top2) {
            ans++;
            pq2.push(top2);
            pq1.push(digit_count(top1));
        } else if (top1 < top2) {
            ans++;
            pq1.push(top1);
            pq2.push(digit_count(top2));
        }
    }
    printf("%d\n", ans);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}