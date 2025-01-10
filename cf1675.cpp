#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null nullptr
const double pie = 3.1415926535897932384626;
const ll inf = INT_MAX;  // Very big number
const ll infinite = LLONG_MAX;
const ll mod = (1e+9) + 7;
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define trav(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vll>
#define vf vector<float>
#define vvf vector<vector<float>>
#define vd vector<double>
#define vvd vector<vd>
#define vb vector<bool>
#define pii pair<int, int>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define pll pair<ll, ll>
#define mpii map<int, int>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>

/*
====================================
*/
vector<vector<int>> paths;

void solve(map<int, vector<int>> &mp, int root, vector<int>& arr) {
    if (mp[root].size() == 0) {
        arr.push_back(root);
        paths.push_back(arr);
        return;
    }
    if (mp[root].size() == 1) {
        arr.push_back(root);
        return solve(mp, mp[root][0], arr);
    }
    for (int i = 0; i < mp[root].size() - 1; i++) {
        vector<int> temp;
        solve(mp, mp[root][i], temp);
    }
    arr.push_back(root);
    solve(mp, mp[root].back(), arr);
}

void test_case() {
    int n, root, temp;
    cin >> n;
    map<int, vector<int>> mp;
    paths.clear();
    vector<int> arr;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp != i) {
            mp[temp].push_back(i);
        } else {
            root = temp;
        }
    }
    solve(mp, root, arr);
    cout << paths.size() << "\n";
    for (auto path : paths) {
        cout << path.size() << "\n";
        for (auto i : path) {
            cout << i << " ";
        }
        printf("\n");
    }
    printf("\n\n\n\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
