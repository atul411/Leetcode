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
*/

ll solve(ll last, vector<ll> &arr, ll index, ll c, ll d) {
    if (index >= arr.size()) return 0;
    if (arr[index] == last + 1) {
        last++;
        return solve(last, arr, index + 1, c, d);
    }
    return min((ll)(arr.size() - index) * c, (arr[index] - last - 1) * d + solve(arr[index], arr, index + 1, c, d));
}

void test_case() {
    ll n, c, d;
    cin >> n >> c >> d;
    ll ans = 0, last = 0, temp;
    set<ll> st;
    vector<ll> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (st.count(temp)) {
            ans += c;
        } else {
            st.insert(temp);
            arr.push_back(temp);
        }
    }
    sort(arr.begin(), arr.end());
    if (arr[0] != 1) {
        arr.insert(arr.begin(), 1);
        ans += d;
    }
    last = 1;
    ans += solve(last, arr, 1, c, d);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
