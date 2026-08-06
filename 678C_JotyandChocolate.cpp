#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long countA = n / a;
    long long countB = n / b;
    long long countBoth = n / lcm(a, b);

    long long result = (countA - countBoth) * p 
                     + (countB - countBoth) * q 
                     + countBoth * max(p, q);

    cout << result << "\n";
    return 0;
}
