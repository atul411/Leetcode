#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvl = vector<vector<ll>>;

string upper_case(string str) {
    for (auto &ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto &ch : str) {
        ch = tolower(ch);
    }
    return str;
}

bool equal_ignore_case(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s2.size(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return false;
        }
    }
    return true;
}

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
vector<int> sieve(int n) {
    vector<int> arr;
    int i = 0;
    while (arr.size() < n) {
        if (is_prime(i)) {
            arr.push_back(i);
        }
        i++;
    }
    return arr;
}

bool equal_double(double a, double b) {
    return abs(a - b) <= 1e-3;
}

int main() {
    int smallest = 101, indexSmall;
    int biggest = 0, indexBig;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] <= smallest) {
            smallest = arr[i];
            indexSmall = i;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= biggest) {
            biggest = arr[i];
            indexBig = i;
        }
    }
    int ans = 0;
    if (indexSmall > indexBig) {
        ans = indexBig + (n - 1 - indexSmall);
    } else {
        ans = indexBig + (n - 1 - indexSmall) - 1;
    }
    printf("%d", ans);
}
