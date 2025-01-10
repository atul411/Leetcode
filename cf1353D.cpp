#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

struct Comprator {
    bool operator()(const pii a, const pii b) {
        if (a.second - a.first != b.second - b.first) {
            return (a.second - a.first) < (b.second - b.first);
        }
        return a.first > b.first;
    }
};

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    priority_queue<pii, vector<pii>, Comprator> pq;
    int curr = 1;
    pq.push({1, n});
    while (pq.size()) {
        auto top = pq.top();
        pq.pop();
        int first = top.first, second = top.second;
        if ((second - first + 1) % 2 == 0) {
            int index = (second + first - 1) / 2;
            arr[index] = curr;
            if (index - 1 >= first) {
                pq.push({first, index - 1});
            }
            if (index + 1 <= second) {
                pq.push({index + 1, second});
            }
            curr++;
        } else {
            int index = (first + second) / 2;
            arr[index] = curr;
            if (index - 1 >= first) {
                pq.push({first, index - 1});
            }
            if (index + 1 <= second) {
                pq.push({index + 1, second});
            }
            curr++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}