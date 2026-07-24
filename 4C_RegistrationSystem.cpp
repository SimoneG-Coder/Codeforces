#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> reg;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;
        if (reg.find(name) == reg.end()) {
            cout << "OK" << endl;
            reg[name] = 1; // first time seen
        } else {
            cout << name << reg[name] << endl;
            reg[name]++; // increment suffix counter
        }
    }

    return 0;
}
