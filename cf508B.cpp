#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();
    int index = -1, last = str[n - 1] - '0';
    for (int i = n - 2; i >= 0; i--) {
        if ((str[i] - '0') % 2 == 0 and index == -1) {
            index = i;
        } else if ((str[i] - '0') % 2 == 0 and str[i] - '0' < last) {
            index = i;
        }
    }
    if (index == -1) {
        printf("-1");
        return 0;
    }
    swap(str[index], str[n - 1]);
    cout << str;
}