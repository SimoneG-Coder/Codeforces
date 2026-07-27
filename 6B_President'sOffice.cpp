#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<string> office(n);
    for (int i = 0; i < n; i++)
        cin >> office[i];

    set<char> ans;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (office[i][j] == c) {
                for (int k = 0; k < 4; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        char ch = office[ni][nj];
                        if (ch != '.' && ch != c)
                            ans.insert(ch);
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;
    return 0;
}
