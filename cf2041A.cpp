#include<bits/stdc++.h>




using namespace std;

int main() {
    int sum = 0, total = 15, temp;
    for (int i = 0; i < 4; i++) {
        cin >> temp;
        sum += temp;
    }
    total -= sum;
    cout << total;
}