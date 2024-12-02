#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    queue<int> que1, que2, que3;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) {
            que1.push(i + 1);
        } else if (temp == 2) {
            que2.push(i + 1);
        } else {
            que3.push(i + 1);
        }
    }
    cout << min({que1.size(), que2.size(), que3.size()}) << endl;
    while (que1.size() and que2.size() and que3.size()) {
        cout << que1.front() << " " << que2.front() << " " << que3.front() << "\n";
        que1.pop();
        que2.pop();
        que3.pop();
    }
}