#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<long long> c(k);
        for (int i = 0; i < k; i++) cin >> c[i];

        bool possible = false;

        // Case 1: any count >= 3
        for (int i = 0; i < k; i++) {
            if (c[i] >= 3) {
                possible = true;
                break;
            }
        }

        // Case 2: at least two letters with count >= 2
        if (!possible) {
            int cnt2 = 0;
            for (int i = 0; i < k; i++) {
                if (c[i] >= 2) cnt2++;
            }
            if (cnt2 >= 2) possible = true;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}


