#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> prefix(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long worms;
        cin >> worms;
        sum += worms;
        prefix[i] = sum;  // cumulative worms up to pile i
    }

    int q;
    cin >> q;
    while (q--) {
        long long worm;
        cin >> worm;
        // binary search for pile
        int pile = lower_bound(prefix.begin(), prefix.end(), worm) - prefix.begin();
        cout << pile + 1 << "\n"; // +1 because piles are 1-indexed
    }

    return 0;
}
