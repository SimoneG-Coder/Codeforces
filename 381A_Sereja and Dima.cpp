#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; // true = Sereja's turn, false = Dima's turn

    while (l <= r) {
        int pick;
        if (a[l] >= a[r]) {
            pick = a[l];
            l++;
        } else {
            pick = a[r];
            r--;
        }

        if (turn) sereja += pick;
        else dima += pick;

        turn = !turn; // switch turns
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}
