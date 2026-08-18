#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int rounds = 0;

    while (true) {
        // End condition: If any two players have the exact same number of tokens
        if (a == b || b == c || a == c) {
            break;
        }

        // Store current tokens to easily find min and max
        vector<int> tokens = {a, b, c};
        int max_val = max({a, b, c});
        int min_val = min({a, b, c});

        // The player with maximum tokens gives 1 token to the player with minimum tokens
        bool subtracted = false;
        bool added = false;

        // Update a
        if (a == max_val && !subtracted) {
            a--;
            subtracted = true;
        } else if (a == min_val && !added) {
            a++;
            added = true;
        }

        // Update b
        if (b == max_val && !subtracted) {
            b--;
            subtracted = true;
        } else if (b == min_val && !added) {
            b++;
            added = true;
        }

        // Update c
        if (c == max_val && !subtracted) {
            c--;
            subtracted = true;
        } else if (c == min_val && !added) {
            c++;
            added = true;
        }

        rounds++;
    }

    cout << rounds << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}
