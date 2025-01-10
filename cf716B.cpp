#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<int> arr(26, 0);
    int wildCard = 0, start = 0, end = 0;
    list<char> lst;
    while (end < str.size()) {
        if (isalpha(str[end])) {
            arr[str[end] - 'A']++;
        } else {
            wildCard++;
        }
        if (end - start + 1 > 26) {
            if (isalpha(str[start])) {
                arr[str[start] - 'A']--;
            } else {
                wildCard--;
            }
            start++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                count++;
            }
        }
        if (count + wildCard == 26) {
            break;
        }
        end++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            lst.push_back('A' + i);
        }
    }
    if (end >= str.size()) {
        printf("-1");
    } else {
        for (int i = 0; i < str.size(); i++) {
            if (!isalpha(str[i]) and i >= start and i <= end) {
                str[i] = lst.back();
                lst.pop_back();
            } else if (!isalpha(str[i])) {
                str[i] = 'A';
            }
        }
        cout << str << "\n";
    }
}