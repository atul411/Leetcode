#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int x = 0;
    stack<char> st;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            st.push('(');
        } else if (st.empty()) {
            x++;
        } else {
            st.pop();
        }
    }
    x += st.size();
    cout << str.size() - x << "\n    ";
}
