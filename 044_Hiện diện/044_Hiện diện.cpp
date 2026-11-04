#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, x, y; 
    cin >> m >> n >> x >> y;

    int a[10][10];
    int b[10][10];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> b[i][j];
        }
    }

    bool isSub = 0;
    int tmp = b[0][0];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == tmp && i <= m - x && j <= n - y) {
                bool isCheck = 1;

                for(int c = 0; c < x; c++) {
                    for(int d = 0; d < y; d++) {
                        if(a[i + c][j + d] != b[c][d]) {
                            isCheck = 0;
                            break;
                        }
                    }
                    if(!isCheck) break;
                }
                if(isCheck) {
                    isSub = 1;
                }
            }
        }
    }
    
    if(isSub == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}