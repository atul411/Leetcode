#include <bits/stdc++.h>
using namespace std;

struct Triplet {
    int curr;
    pair<int, int> location;
    char direction;

    Triplet(int curr, pair<int, int> location, char direciton) {
        this->curr = curr;
        this->direction = direciton;
        this->location = location;
    }
};

int main() {
    set<pair<int, int>> st;
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << pow(n / 2 + 1, 2);
    } else {
        cout << 2 * (n / 2 + 1) * (n / 2 + 2);
    }
}