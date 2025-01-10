#include <bits/stdc++.h>
using namespace std;
#define pll pair<Long, Long>
#define Long long long

int main() {
    Long ans = 1;
    Long k;
    cin >> k;
    if (k == 1) {
        printf("codeforces");
        return 0;
    }
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    for (int i = 0; i < 10; i++) {
        pq.push({1, i});
    }
    string str = "codeforces", resulting;
    vector<int> arr(10, 1);
    while (ans < k) {
        auto top = pq.top();
        pq.pop();
        ans /= top.first;
        top.first++;
        ans *= top.first;
        arr[top.second] = top.first;
        pq.push(top);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < arr[i]; j++) {
            resulting.push_back(str[i]);
        }
    }
    cout << resulting;
}