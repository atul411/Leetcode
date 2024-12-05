#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout<<arr[n-1]<<" ";
    for(int i=1; i<n; i++){
        cout<<arr[i-1]<<" ";
    }
    cout<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}