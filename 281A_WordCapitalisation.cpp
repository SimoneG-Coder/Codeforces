#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Capitalize the first character if it's lowercase
    if (!s.empty() && s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 'a' + 'A';
    }

    cout << s << endl;
    return 0;
}
