#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null nullptr
const double pie = 3.1415926535897932384626;
const ll inf = INT_MAX;  // Very big number
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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a % mod * b % mod) % mod) / gcd(a % mod, b % mod)
#define pi pair<int, int>
#define vs vector<string>
#define umap unordered_map<int, int>
#define pll pair<ll, ll>
#define mp map<int, int>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>

string upper_case(string str) {
    for (auto &ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto &ch : str) {
        ch = tolower(ch);
    }
    return str;
}

bool is_prime(ll n) {
    if (n < 4) return true;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

/*
====================================
*/

void test_case() {
    int n;
    cin >> n;
    vi arr(n + 1);
    pqii pq;
    vb visited(n + 1, false);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] >= 1 and arr[i] <= n and visited[arr[i]] == false) {
            visited[arr[i]] = true;
        } else {
            pq.push(arr[i]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == true) continue;
        int temp = pq.top() - i;
        if (pq.top() % temp != i) {
            printf("-1\n");
            return;
        }
        pq.pop();
        ans++;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
