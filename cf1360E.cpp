#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& arr, int i, int j) {
    if (arr[i][j] == 1) {
        arr[i][j] = 0;
        if (i - 1 >= 0) {
            dfs(arr, i - 1, j);
        }
        if (j - 1 >= 0) {
            dfs(arr, i, j - 1);
        }
    }
}
void test_case() {
    int n;
    scanf("%d", &n);
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            arr[i][j] = (str[j] - '0');
        }
    }
    for (int i = 0; i < n; i++) {
        dfs(arr, n - 1, i);
        dfs(arr, i, n - 1);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
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