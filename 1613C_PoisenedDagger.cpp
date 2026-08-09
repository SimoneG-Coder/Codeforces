#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool canKill(const vector<ll>& a, ll k, ll h) {
    ll total = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        total += min(k, a[i+1] - a[i]);
        if (total >= h) return true; // early exit
    }
    total += k; // last attack
    return total >= h;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll h;
        cin >> n >> h;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll low = 1, high = h, ans = h;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (canKill(a, mid, h)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
