#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> lst1, lst2;
    int len1, len2;
    cin >> len1;
    for (int i = 0; i < len1; i++) {
        int temp;
        cin >> temp;
        lst1.push_back(temp);
    }
    cin >> len2;
    for (int i = 0; i < len2; i++) {
        int temp;
        cin >> temp;
        lst2.push_back(temp);
    }
    vector<pair<list<int>, list<int>>> arr;
    arr.push_back({lst1, lst2});
    int count = 0;
    while (lst1.size() and lst2.size()) {
        count++;
        if (lst1.front() > lst2.front()) {
            lst1.push_back(lst2.front());
            lst2.pop_front();
            lst1.push_back(lst1.front());
            lst1.pop_front();
        } else {
            lst2.push_back(lst1.front());
            lst1.pop_front();
            lst2.push_back(lst2.front());
            lst2.pop_front();
        }

        for (auto i : arr) {
            if (i.first.size() == lst1.size() or i.second.size() == lst1.size()) {
                if (i.first == lst1 or i.second == lst1) {
                    printf("-1");
                    return 0;
                }
            }
        }
        arr.push_back({lst1, lst2});
    }
    cout << count << " ";
    cout << (lst1.empty() ? 2 : 1) << "\n";
}