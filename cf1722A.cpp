#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string curr;
    string str = "Timur";
    sort(str.begin(), str.end());
    int n;
    while (t--) { 
        cin >> n;
        cin >> curr;
        if (n == 5) {
            sort(curr.begin(), curr.end());
            curr == str ? printf("YES\n") : printf("NO\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}