#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    list<int> lst;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (mp.count(temp)) continue;
        lst.push_back(temp);
        mp[temp]++;
        if (lst.size() > k) {
            mp.erase(lst.front());
            lst.pop_front();
        }
    }
    printf("%lu\n", lst.size());
    for (auto i = lst.rbegin(); i != lst.rend(); i++) {
        cout << *i << " ";
    }
    printf("\n");
}
