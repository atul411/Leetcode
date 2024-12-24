#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, W;
    cin >> n >> W;
    long long sum = 0;
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
        sum += arr[i].first;
    }
    sort(arr.begin(), arr.end());
    if (sum < W / 2 or arr[0].first > W) {
        printf("-1\n");
        return;
    }
    sum = 0;
    stack<pair<long long, long long>> st;
    for (int i = 0; i < n; i++) {
        while (sum + arr[i].first > W and st.size()) {
            sum -= st.top().first;
            st.pop();
        }
        st.push(arr[i]);
        sum += arr[i].first;
        if (sum >= W / 2 and sum <= W) {
            break;
        }
    }
    while (sum > W and st.size()) {
        sum -= st.top().first;
        st.pop();
    }
    if (sum < W / 2) {
        printf("-1\n");
        return;
    }
    cout << st.size() << "\n";
    while (st.size()) {
        cout << st.top().second + 1 << " ";
        st.pop();
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