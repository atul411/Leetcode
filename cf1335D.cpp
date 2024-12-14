#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n = 9;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            arr[i][j] = (str[j] - '0');
        }
    }

    stack<int> st;
    for (int i = 1; i <= 9; i++) {
        st.push(i);
    }
    for (int i = 0; i < 27; i++) {
        int row = i / 3 + i % 3;
        int col = 
    }
    for (int i = 0; i < n; i += 3) {
        int j = i / 3;
        int row = i;
        for (; j < 9; j += 3) {
            if (arr[row][j] == st.top()) {
                int top = st.top();
                st.pop();
                arr[row][j] = st.top();
                // cout<<"("<<row<<","<<j<<")->"<<st.top()<<" . ";
                st.pop();
                st.push(top);
            } else {
                arr[row][j] = st.top();
                // cout<<"("<<row<<","<<j<<")->"<<st.top()<<"  ";
                st.pop();
            }
            row++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}