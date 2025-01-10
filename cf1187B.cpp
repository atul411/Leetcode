#include <bits/stdc++.h>
using namespace std;

string str;
vector<vector<int> > graph;

bool helper(int mid, vector<int> &mp) {
    for (int i = 0; i < 26; i++) {
        if (graph[mid][i] < mp[i]) {
            return false;
        }
    }
    return true;
}

void test_case() {
    string temp;
    cin >> temp;
    vector<int> mp(26, 0);
    for (int i = 0; i < temp.size(); i++) {
        mp[temp[i] - 'a']++;
    }
    int start = 0, end = str.size() - 1, mid;
    int ans = INT_MAX;

    while (start <= end) {
        mid = (start + end) / 2;
        bool isgood = helper(mid, mp);
        if (isgood) {
            ans = min(ans, mid + 1);
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    int n, t;
    cin >> n >> str >> t;
    vector<int> curr(26, 0);
    graph.resize(str.size());
    for (int i = 0; i < str.size(); i++) {
        curr[str[i] - 'a']++;
        graph[i] = curr;
    }
    while (t--) {
        test_case();
    }
}