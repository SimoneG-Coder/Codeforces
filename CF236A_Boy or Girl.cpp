#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string username;
    cin >> username;

    // Collect unique characters in a set
    unordered_set<char> unique_chars;
    for (char c : username) {
        unique_chars.insert(c);
    }

    // Check parity of the unique character count
    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}
