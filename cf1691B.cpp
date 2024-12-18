#include <bits/stdc++.h>
using namespace std;

void shuffleElement(vector<int> &arr, int start, int end) {
    for (int i = start; i < end; i++) {
        arr[i] = i + 2;
    }
    arr[end] = start + 1;
}
void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int last = 0, i;
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1] and i - last == 1) {
            printf("-1\n");
            return;
        } else if (arr[i] != arr[i - 1]) {
            shuffleElement(arr, last, i - 1);
            last = i;
        }
    }
    if (i - last == 1) {
        printf("-1\n");
        return;
    } else {
        shuffleElement(arr, last, n - 1);
    }
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