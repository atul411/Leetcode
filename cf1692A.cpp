#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    vector<int> arr(4);
    while (n--) {
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
        int ans = 0;
        for (int i = 1; i < 4; i++) {
            if (arr[i] > arr[0]) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}
int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}