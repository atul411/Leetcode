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

vector<bool> visited;
vll allowed;
vvll graph;
vll arr;
int m;

void dfs(int curr, int continuous) {
    if (arr[curr] == 1) {
        allowed[curr] += continuous + 1;
        for (auto i : graph[curr]) {
            if (visited[i] == false) {
                visited[i] = true;
                dfs(i, allowed[curr]);
            }
        }
    } else {
        if (continuous > m) {
            allowed[curr] = continuous;
        } else {
            allowed[curr] = 0;
        }
        for (auto i : graph[curr]) {
            if (visited[i] == false) {
                visited[i] = true;
                dfs(i, allowed[curr]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n >> m;
    arr.resize(n + 1, 0);
    rep(i, 1, n + 1) {
        cin >> arr[i];
    }

    graph.resize(n + 1, vll());
    rep(i, 0, n - 1) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    allowed.resize(n + 1, 0);
    visited.resize(n + 1, false);
    visited[1] = true;
    dfs(1, 0);
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (graph[i].size() == 1 and allowed[i] <= m) {
            ans++;
        }
    }
    cout << ans << "\n";
}
