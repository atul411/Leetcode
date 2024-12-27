#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);
    while (n > 3) {
        if (n % 2 == 0) {
            n = n / 2;
            arr.push_back(n);
        } else {
            n--;
            arr.push_back(n);
        }
    }
    if (n == 3) {
        arr.push_back(2);
        arr.push_back(1);
        n = 0;
    } else if (n == 2) {
        arr.push_back(1);
        arr.push_back(1);
    } else {
        arr.push_back(1);
    }
    cout << arr.size() << "\n";
    for (auto i : arr) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}