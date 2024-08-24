#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<long long> dp(sum + 1, 0);
    dp[0] = 1;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= arr[j]) {
                dp[i] = (dp[i] + dp[i - arr[j]]) % MOD;
            }
        }
    }

    cout << dp[sum] << endl;
    return 0;
}
