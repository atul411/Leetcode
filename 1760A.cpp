#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    vector<int> arr(3);
    while (n--) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        cout << arr[1] << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}