#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Ceiling division for each dimension
    long long tiles_n = (n + a - 1) / a;  // ceil(n / a)
    long long tiles_m = (m + a - 1) / a;  // ceil(m / a)

    cout << tiles_n * tiles_m << endl;
    return 0;
}
