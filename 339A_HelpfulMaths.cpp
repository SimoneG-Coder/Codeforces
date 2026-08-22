#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Extract digits from the string
    vector<int> nums;
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c - '0');
        }
    }

    // Sort the digits
    sort(nums.begin(), nums.end());

    // Print them back with '+' in between
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << "+";
    }
    cout << "\n";

    return 0;
}
