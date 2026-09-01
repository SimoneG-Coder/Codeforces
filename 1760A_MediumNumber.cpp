#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        // Put numbers into a vector
        vector<int> nums = {a, b, c};
        // Sort them
        sort(nums.begin(), nums.end());
        // The middle element is the answer
        cout << nums[1] << "\n";
    }
    return 0;
}
