#include <bits/stdc++.h>
using namespace std;

// int binarySearch(int second, int left, int right, int exp) {
//     int mid = (left + right) / 2;
//     if (mid * pow(2, exp) > second) {
//         return binarySearch(second, left, mid - 1, exp);
//     } else if (mid * pow(2, exp) < second) {

//     } else {
//         return mid;
//     }
// }
int main() {
    int t;
    cin >> t;
    int first, second;
    map<int, int> mp;
    while (t--) {
        cin >> first >> second;
        if (first == 1) {
            mp[second]++;
            continue;
        }
        int curr = 29;
        for (int i = 29; i >= 0; i--) {
            if (mp[i] == 0 or pow(2, i) > second) {
                continue;
            }
            if (mp[i] * pow(2, i) <= second) {
                second -= mp[i] * pow(2, i);
            } else {
                int a = second / pow(2, i);
                second -= a * pow(2, i);
            }
        }

        if (second == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}