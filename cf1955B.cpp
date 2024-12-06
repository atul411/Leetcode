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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a % mod * b % mod) % mod) / gcd(a % mod, b % mod)
#define pii pair<int, int>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define pll pair<ll, ll>
#define mpii map<int, int>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define sum(a) accumulate(all(a), 0.0)
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>

void test_case() {
    int n, c, d, temp, mn = inf, last;
    cin >> n >> c >> d;
    mpii mp;
    for (int i = 0; i < (n * n); i++) {
        cin >> temp;
        mp[temp]++;
        mn = min(mn, temp);
    }
    vvi arr(n, vi(n));
    arr[0][0] = mn;
    for (int i = 1; i < n; i++) {
        arr[0][i] += arr[0][i - 1] + d;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] += arr[i - 1][j] + c;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mp[arr[i][j]]) {
                mp[arr[i][j]]--;
            } else {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}