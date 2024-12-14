#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, target = "hello";
    cin >> str;
    int curr = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == target[curr] and curr < target.size()) {
            curr++;
        }
    }
    if (curr == target.size()) {
        printf("YES");
    } else {
        printf("NO");
    }
}