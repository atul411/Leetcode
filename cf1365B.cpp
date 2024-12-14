#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr1(n);
    int last = -1;
    bool sorted = true;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i].first;
        if (arr1[i].first >= last) {
            last = arr1[i].first;
        } else {
            sorted = false;
        }
    }
    int oneCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i].second;
        if (arr1[i].second == 1) {
            oneCount++;
        }
    }
    if (sorted == true or (oneCount > 0 and oneCount < n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}