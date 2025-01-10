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

ll nextPower2(ll n) {
    ll x = 0;
    while (pow(2, x) <= n) {
        x++;
    }
    return pow(2, x);
}

void solve(vll arr, ll n) {
    mpll mp;
    ll mx = 0;
    for (auto i : arr) {
        mp[i]++;
        mx = max(mx, i);
    }
    if (mx <= 1) {
        printf("0");
        return;
    }
    vll dp(mx + 1);
    dp[0] = 0;
    dp[1] = mp[2] * 2;
    dp[2] = max(dp[1], mp[1] + mp[3] * 3);
    rep(i, 3, mx + 1) {
        dp[i] = max(dp[i - 1],
                    mp[i - 1] * (i - 1) + mp[i + 1] * (i + 1) + dp[i - 3]);
    }
    cout << dp[mx];
}

int main() {
    ll n;
    cin >> n;
    vll arr(n);
    read(arr);
    solve(arr, n);
}
