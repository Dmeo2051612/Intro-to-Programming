#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int dem = 0;
    int yenNgua[100][2];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int tmp = a[i][j];

            bool isMax = 1;
            for(int x = 0; x < n; x++) {
                if(a[i][x] > tmp) {
                    isMax = 0;
                    break;
                }
            }

            bool isMin = 1;
                for(int y = 0; y < m; y++) {
                    if(a[y][j] < tmp) {
                        isMin = 0;
                        break;
                    }
                }
            if(isMax && isMin) {
                yenNgua[dem][0] = i + 1;
                yenNgua[dem][1] = j + 1;
                dem++;
            }
        }
    }    

    cout << dem << endl;
    for(int i = 0; i < dem; i++) {
        cout << yenNgua[i][0] << " " << yenNgua[i][1] << endl;
    }
    
    return 0;
}