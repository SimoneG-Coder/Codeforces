#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // dp[i][digit][weight]
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, 0)));

        // Initialize first domino (positions 0 and 1)
        for (int d0 = 0; d0 <= 1; d0++) {
            if (s[0] != '?' && s[0] != char('0' + d0)) continue;
            for (int d1 = 0; d1 <= 1; d1++) {
                if (s[1] != '?' && s[1] != char('0' + d1)) continue;
                int w = d0 + d1;
                dp[1][d1][w] = (dp[1][d1][w] + 1) % MOD;
            }
        }

        // Fill DP
        for (int i = 1; i < n - 1; i++) {
            for (int lastDigit = 0; lastDigit <= 1; lastDigit++) {
                for (int lastWeight = 0; lastWeight <= 2; lastWeight++) {
                    int ways = dp[i][lastDigit][lastWeight];
                    if (!ways) continue;

                    for (int cur = 0; cur <= 1; cur++) {
                        if (s[i+1] != '?' && s[i+1] != char('0' + cur)) continue;
                        int newWeight = lastDigit + cur;
                        if (newWeight == lastWeight) continue; // must differ
                        dp[i+1][cur][newWeight] = (dp[i+1][cur][newWeight] + ways) % MOD;
                    }
                }
            }
        }

        // Answer = sum over last position
        int ans = 0;
        for (int d = 0; d <= 1; d++) {
            for (int w = 0; w <= 2; w++) {
                ans = (ans + dp[n-1][d][w]) % MOD;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
