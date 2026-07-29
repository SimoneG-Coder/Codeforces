#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> adj[N];
int cat[N];
int n, m;
int ans = 0;

void dfs(int u, int parent, int consecutive) {
    if (cat[u])
        consecutive++;
    else
        consecutive = 0;

    if (consecutive > m)
        return;

    bool isLeaf = true;

    for (int v : adj[u]) {
        if (v == parent)
            continue;
        isLeaf = false;
        dfs(v, u, consecutive);
    }

    if (isLeaf)
        ans++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> cat[i];

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, 0);

    cout << ans << '\n';

    return 0;
}
