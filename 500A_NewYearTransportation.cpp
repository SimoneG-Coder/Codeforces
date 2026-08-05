#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> a(n); 
    for (int i = 1; i < n; i++) {
        cin >> a[i];  // input starts from cell 1, so we store from index 1
    }

    int pos = 1;  // starting position
    while (pos < t) {
        pos += a[pos];  // jump forward
    }

    if (pos == t) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
