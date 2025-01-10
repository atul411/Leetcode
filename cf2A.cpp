#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> rounds;
    map<string, int> totalPoints;

    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        rounds.push_back({name, score});
        totalPoints[name] += score;
    }

    int maxPoints = INT_MIN;
    for (const auto &entry : totalPoints) {
        maxPoints = max(maxPoints, entry.second);
    }

    map<string, int> currentPoints;
    for (const auto &round : rounds) {
        string name = round.first;
        int score = round.second;
        currentPoints[name] += score;

        if (currentPoints[name] >= maxPoints && totalPoints[name] == maxPoints) {
            cout << name << endl;
            break;
        }
    }

    return 0;
}
