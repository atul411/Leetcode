#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>

void test_case() {
    int n;
    cin >> n;
    vvi graph(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int curr = 0, needed = 0;
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        curr = 0, needed = 0;
        graph[i].resize(size);
        for (int j = 0; j < size; j++) {
            cin >> graph[i][j];
            if (curr <= graph[i][j]) {
                needed += (graph[i][j] - curr + 1);
                curr += (graph[i][j] - curr + 1);
            }
            curr++;
        }
        pq.push({needed, i});
    }

    needed = 0, curr = 0;
    while (pq.size()) {
        auto front = pq.top();
        pq.pop();
        for (auto i : graph[front.second]) {
            if (curr <= i) {
                needed += (i - curr + 1);
                curr += (i - curr + 1);
            }
            curr++;
        }
    }
    cout << needed << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}