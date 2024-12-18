#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    scanf("%d", &n);
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    int m, temp;
    scanf("%d", &m);
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++) {
        scanf("%d", &temp);
        mp[temp]++;
    }
    bool differentFound = false;
    for (int i = 0; i < n; i++) {
        if (arr1[i] == arr2[i]) {
            continue;
        }
        if (mp[arr2[i]] == 0) {
            printf("NO\n");
            return;
        }
        differentFound = true;
        mp[arr2[i]]--;
    }
    if (!differentFound) {
        for (int i = 0; i < n; i++) {
            if (mp[arr1[i]]) {
                differentFound = true;
            }
        }
    }
    if (differentFound) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}