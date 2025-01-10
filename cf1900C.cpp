#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node {
   public:
    ll left, right;
    char direction;
    Node(ll left, ll right, char direction) {
        this->direction = direction;
        this->left = left;
        this->right = right;
    }
};

ll solve(vector<Node *> &arr, ll curr) {
    if (arr[curr]->left == 0 and arr[curr]->right == 0) {
        return 0;
    }
    ll ans = INT_MAX, temp = 0;
    if (arr[curr]->left != 0) {
        temp = (arr[curr]->direction != 'L') ? 1 : 0;
        ans = min(ans, solve(arr, arr[curr]->left) + temp);
    }
    if (arr[curr]->right != 0) {
        temp = (arr[curr]->direction != 'R') ? 1 : 0;
        ans = min(ans, solve(arr, arr[curr]->right) + temp);
    }
    return ans;
}

void test_case() {
    ll n, left, right;
    string str;
    cin >> n >> str;
    vector<Node *> arr(n + 1);
    for (int i = 0; i < n; i++) {
        arr[i + 1] = new Node(0, 0, str[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> left >> right;
        arr[i + 1]->left = left;
        arr[i + 1]->right = right;
    }
    ll ans = solve(arr, 1);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}