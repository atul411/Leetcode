#include <bits/stdc++.h>
using namespace std;

pair<int, int> find(vector<pair<int, int>> &parent, int x) {
    if (parent[x].first == x) {
        return parent[x];
    }
    return find(parent, parent[x].first);
}

void unionSet(vector<pair<int, int>> &parent, int x, int y) {
    auto a = find(parent, x);
    auto b = find(parent, y);
    if (a.second > b.second) {
        parent[b.first] = {a.first, b.second};
    } else if (a.second < b.second) {
        parent[a.first] = {b.first, a.second};
    } else {
        parent[a.first] = {b.first, b.second + 1};
    }
}

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> parent(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = {i, 0};
    }
    for (int i = 1; i <= n; i++) {
        unionSet(parent, i, arr[i]);
    }
    set<int> st;
    for (int i = 1; i <= n; i++) {
        auto a = find(parent, i);
        st.insert(a.first);
    }
    cout << st.size();
}

int main() {
    test_case();
}