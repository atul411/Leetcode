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
#define mpll map<ll, ll>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>
#define rep(i, start, n) for (ll i = start; i < n; i++)

template <typename T>
void read(vector<T>& arr) {
    for (auto& x : arr) {
        cin >> x;
    }
}

string upper_case(string str) {
    for (auto& ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto& ch : str) {
        ch = tolower(ch);
    }
    return str;
}

bool is_prime(ll n) {
    if (n < 4) return true;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

vector<int> shieve(int n) {
    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (arr[i] == false) continue;
        for (int j = 2; j * i <= n; j++) {
            arr[i * j] = false;
        }
    }
    vector<int> ans;
    for (int i = 0; i <= n; i++) {
        if (arr[i] == true) {
            ans.push_back(i);
        }
    }
    return ans;
}

/*
====================================
*/

vll parent;
vll dist;

void solve(vector<vector<pll>>& arr, ll n) {
    dist[1] = 0;
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({1, 1});
    while (pq.size() > 0) {
        auto top = pq.top();
        pq.pop();
        for (auto i : arr[top.second]) {
            if (dist[i.first] > dist[top.second] + i.second) {
                parent[i.first] = top.second;
                dist[i.first] = dist[top.second] + i.second;
                pq.push({dist[i.first], i.first});
            }
        }
    }
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<vector<pll>> graph(n + 1);
    rep(i, 0, m) {
        ll x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back({y, z});
        graph[y].push_back({x, z});
    }
    parent.resize(n + 1);
    dist.resize(n + 1);
    rep(i, 0, n + 1) {
        parent[i] = i;
        dist[i] = infinite;
    }
    solve(graph, n);
    if (dist[n] == infinite) {
        printf("-1");
        return 0;
    }
    vector<int> ans;
    int i = n;
    while (i != 1) {
        ans.push_back(i);
        i = parent[i];
    }
    ans.push_back(i);
    for (auto itr = ans.rbegin(); itr != ans.rend(); itr++) {
        cout << *itr << " ";
    }
}