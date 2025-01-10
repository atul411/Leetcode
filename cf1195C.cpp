#include <bits/stdc++.h>
using namespace std;
#define Long long long

int main() {
    int n;
    cin >> n;
    vector<vector<Long>> arr(2, vector<Long>(n, 0));
    for (int i = 0; i < n; i++) {
        cin >> arr[0][i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[1][i];
    }
    Long maxByFar1 = arr[0][0], maxByFar2 = arr[1][0];
    for (int i = 1; i < n; i++) {
        arr[0][i] = maxByFar2 + arr[0][i];
        arr[1][i] = maxByFar1 + arr[1][i];
        maxByFar1 = max(maxByFar1, arr[0][i]);
        maxByFar2 = max(maxByFar2, arr[1][i]);
    }
    cout << max(maxByFar1, maxByFar2);
}