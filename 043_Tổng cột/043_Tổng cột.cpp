#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    int a[100][100];
    long long *res = new long long[n];
    int index = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int j = 0; j < n; j++) {
        long long tmp = 0;
        for(int i = 0; i < m; i++) {
            tmp += a[i][j];
        }
        res[index] = tmp;
        index++;
    }
    for(int i = 0; i < index; i++) {
        cout << res[i] << " ";
    }
    return 0;
}