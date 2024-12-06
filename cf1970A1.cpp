#include <bits/stdc++.h>
using namespace std;

class Triplet {
   public:
    int balance, index;
    char ch;
    Triplet(int balance, int index, char ch) {
        this->balance = balance;
        this->index = index;
        this->ch = ch;
    }
};

bool lambda(Triplet a, Triplet b) {
    if (a.balance == b.balance) {
        return a.index > b.index;
    }
    return a.balance < b.balance;
}

int main() {
    string str;
    cin >> str;
    vector<Triplet> vect;
    int open = 0, close = 0;
    for (int i = 0; i < str.size(); i++) {
        vect.push_back(Triplet(open - close, i, str[i]));
        if (str[i] == '(') {
            open++;
        } else {
            close++;
        }
    }
    sort(vect.begin(), vect.end(), lambda);
    string ans;
    for (auto i : vect) {
        ans.push_back(i.ch);
    }
    cout << ans << "\n";
}