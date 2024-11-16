
#include "./library.h"



int solution(vector<int> &arr, int target) {
    int n = arr.size();
    int dp[target + 1];

    fill_n(dp, target + 1, 0); m

    
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = arr[i - 1]; j <= target; j++) {
            dp[j] += dp[j - arr[i - 1]];
        }
    }
    return dp[target];
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 4;
    cout << "Number of ways to reach target: " << solution(arr, target);
    return 0;
}
