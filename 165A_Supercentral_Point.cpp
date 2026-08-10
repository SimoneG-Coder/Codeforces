#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int>> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    int supercentralCount = 0;

    for (int i = 0; i < n; i++) {
        bool left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (points[j].second == points[i].second) {
                if (points[j].first < points[i].first) left = true;
                if (points[j].first > points[i].first) right = true;
            }
            if (points[j].first == points[i].first) {
                if (points[j].second < points[i].second) down = true;
                if (points[j].second > points[i].second) up = true;
            }
        }
        if (left && right && up && down) supercentralCount++;
    }

    cout << supercentralCount << "\n";
    return 0;
}
