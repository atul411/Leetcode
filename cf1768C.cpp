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
    int n;
    cin >> n;
    vi arr(n), p(n), q(n);
    set<int> st1, st2;

    for (int i = 1; i <= n; i++) {
        st1.insert(i);
        st2.insert(i);
    }
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (st1.count(arr[i])) {
            p[i] = arr[i];
            st1.erase(arr[i]);
        } else if (st2.count(arr[i])) {
            q[i] = arr[i];
            st2.erase(arr[i]);
        } else {
            printf("NO\n");
            return;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (p[i] == 0) {
            auto lower = st1.lower_bound(q[i]);

            p[i] = *lower;
            st1.erase(*lower);
        }
    }

    for (int i = 0; i < n; i++) {
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        test_case();
    }
}

