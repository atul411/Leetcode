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

void operation(vll &a, ll &x) {
    for (auto &i : a) {
        i = abs(i - x);
    }
}

void test_case() {
    ll n;
    cin >> n;
    vll arr(n);
    int oddCount = 0;
    for (auto &a : arr) {
        cin >> a;
        oddCount += (a & 1);
    }
    if (oddCount != 0 and oddCount != n) {
        printf("-1\n");
        return;
    }
    vll ans;
    for (int i = 29; i >= 0; i--) {
        ll x = (1LL << i);
        operation(arr, x);
        ans.push_back(x);
    }
    if (arr[0] == 1) {
        ll a = 1;
        operation(arr, a);
        ans.push_back(a);
    }
    assert(arr[n - 1] == 0);
    printf("%lu\n", ans.size());
    for (auto i : ans) {
        printf("%lld ", i);
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
