#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(vector<bool> &visited, ll curr, vector<ll> &p, vector<ll> &path) {
    if (visited[curr]) {
        return;
    }
    visited[curr] = true;
    path.push_back(curr);
    dfs(visited, p[curr], p, path);
}

void test_case() {
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<ll> permutation(n + 1), value(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> permutation[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> value[i];
    }
    vector<bool> visited(n + 1, false);
    vector<ll> path1, path2;
    dfs(visited, pb, permutation, path1);
    visited.assign(n + 1, false);
    dfs(visited, ps, permutation, path2);
    ll bodyaScore = 0, currScore = 0;
    ll SashaScore = 0;
    for (int i = 0; i < min((ll)path1.size(), k); i++) {
        bodyaScore = max(bodyaScore, currScore + (k - i) * value[path1[i]]);
        currScore += value[path1[i]];
    }
    currScore = 0;
    for (int i = 0; i < min((ll)path2.size(), k); i++) {
        SashaScore = max(SashaScore, currScore + (k - i) * value[path2[i]]);
        currScore += value[path2[i]];
    }
    if (bodyaScore > SashaScore) {
        printf("Bodya\n");
    } else if (bodyaScore < SashaScore) {
        printf("Sasha\n");
    } else {
        printf("Draw\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}