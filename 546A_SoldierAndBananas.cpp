#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Total cost = k * (1 + 2 + ... + w) = k * w * (w + 1) / 2
    int totalCost = k * w * (w + 1) / 2;

    // Money needed = max(0, totalCost - n)
    int borrow = totalCost - n;
    if (borrow < 0) borrow = 0;

    cout << borrow << endl;
    return 0;
}
