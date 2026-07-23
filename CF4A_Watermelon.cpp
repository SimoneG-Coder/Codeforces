//if a number is even and greater than 2, it can be divided into 2 even numbers
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
