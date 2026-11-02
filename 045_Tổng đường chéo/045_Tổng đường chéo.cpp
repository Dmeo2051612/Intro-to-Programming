#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int res = 0;
    x--;
    y--;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(i - x) == abs(j - y)) {
                res += a[i][j];
            }
        }
    }

    cout << res;

    return 0;
}