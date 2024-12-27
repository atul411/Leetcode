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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a % mod * b % mod) % mod) / gcd(a % mod, b % mod)
#define pii pair<int, int>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define pll pair<ll, ll>
#define mpii map<int, int>
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
@author Atul
*/

void test_case() {
    int n, m;
    cin >> n >> m;
    vvll matrix(n, vll(m));
    for (auto &arr : matrix) {
        for (auto &a : arr) {
            cin >> a;
        }
    }
    int start = 0, end = m - 1;
    ll ans = 0;
    while (start <= end) {
        int i = 0, j = n - 1;
        while (i <= j) {
            ll curr = infinite;
            curr = min(curr, abs(matrix[i][start] - matrix[i][end]) + abs(matrix[i][start] - matrix[j][start]) + abs(matrix[i][start] - matrix[j][end]));
            curr = min(curr, abs(matrix[j][start] - matrix[i][end]) + abs(matrix[j][start] - matrix[i][start]) + abs(matrix[j][start] - matrix[j][end]));
            curr = min(curr, abs(matrix[i][end] - matrix[i][start]) + abs(matrix[i][end] - matrix[j][start]) + abs(matrix[i][end] - matrix[j][end]));
            curr = min(curr, abs(matrix[j][end] - matrix[i][start]) + abs(matrix[j][end] - matrix[j][start]) + abs(matrix[j][end] - matrix[i][end]));
            ans += curr;
            i++;
            j--;
        }
        start++;
        end--;
    }
    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
