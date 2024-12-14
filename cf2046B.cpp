#include <bits/stdc++.h>
using namespace std;

// Function to find the lexicographically smallest array
vector<int> findSmallestArray(vector<int>& a, int n) {
    vector<int> smallest = a;  // Start with the original array as the smallest

    for (int i = 0; i < n; ++i) {
        // Create a rotated version of the array
        vector<int> rotated(a.begin() + i, a.end());
        rotated.insert(rotated.end(), a.begin(), a.begin() + i);

        // Increment the first element of the rotated array
        rotated[0] += 1;

        // Compare lexicographically
        if (rotated < smallest) {
            smallest = rotated;
        }

        // Reset increment for further iterations (not necessary in C++)
    }

    return smallest;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of the array

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> result = findSmallestArray(a, n);
        sort(result.begin(), result.end());
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
