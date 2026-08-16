#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());

        long long ans = v[2] - v[0]; // initial range

        // Case 1: Replace max with sum of other two
        {
            long long x = v[0], y = v[1], z = v[0] + v[1];
            ans = min(ans, max({x, y, z}) - min({x, y, z}));
        }

        // Case 2: Replace min with sum of other two
        {
            long long x = v[1], y = v[2], z = v[1] + v[2];
            ans = min(ans, max({x, y, z}) - min({x, y, z}));
        }

        cout << ans << "\n";
    }
    return 0;
}
