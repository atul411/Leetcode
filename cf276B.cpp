#include <bits/stdc++.h>
using namespace std;

vector<int> arr(26);

bool is_palindrome(int n) {
    if (n <= 2) return true;
    int oddCount = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

void remove() {
    int temp = -1, defaultOdd = -1;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 == 0 and arr[i]) {
            temp = i;
        } else if (arr[i] % 2 != 0) {
            defaultOdd = i;
        }
    }
    if (temp != -1) {
        arr[temp]--;
    } else {
        arr[defaultOdd]--;
    }
}

int main() {
    string str;
    cin >> str;
    for (auto i : str) {
        arr[i - 'a']++;
    }
    int n = str.size();
    for (int i = 0; i < n; i++) {
        bool curr = is_palindrome(n - i);
        if (curr and i % 2 == 0) {
            printf("First");
            return 0;
        } else if (curr) {
            printf("Second");
            return 0;
        }
        remove();
    }
}