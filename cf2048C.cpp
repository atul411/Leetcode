#include <bits/stdc++.h>
using namespace std;

int diff(string a, string b) {
    int count = 0, index = b.size() - 1;
    int index2 = a.size() - 1;
    while (index >= 0) {
        if (a[index2] != b[index]) count++;
        index--;
        index2--;
    }
    return count;
}

void test_case() {
    string str;
    cin >> str;
    int pos = str.find("0");
    if (pos == -1) {
        int length = str.size();
        cout << 1 << " " << length << " " << 1 << " " << 1 << "\n";
        return;
    }
    int length = str.size() - pos, start = 0, curr = -1;
    for (int i = 0; i < str.size() - length + 1; i++) {
        string temp = str.substr(i, length);
        int d = diff(str, temp);
        if (d > curr) {
            curr = d;
            start = i + 1;
        }
    }
    cout << 1 << " " << str.size() << " ";
    cout << start << " " << start + length - 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}