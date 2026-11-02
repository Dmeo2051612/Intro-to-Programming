#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int x1, y1, x2, y2;
    bool check[101][101] = {}; 
    for(int i =  0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = x1; i <= x2; i++) {
            for(int j = y1; j <= y2; j++) {
                check[i][j] = true;
            }
        }
    }

    int res = 0;
    for(int i = 1; i <= 100; i++) {
        for(int j = 1; j <= 100; j++) {
            if(check[i][j]) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}