#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;
vector<int> depth;

int dfs(int u) {
    if (depth[u] != -1) return depth[u];
    int maxDepth = 1; // itself
    for (int v : adj[u]) {
        maxDepth = max(maxDepth, 1 + dfs(v));
    }
    return depth[u] = maxDepth;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.assign(n + 1, {});
    depth.assign(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        int manager;
        cin >> manager;
        if (manager != -1) {
            adj[manager].push_back(i); // manager -> employee
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dfs(i));
    }

    cout << ans << "\n";
    return 0;
}
