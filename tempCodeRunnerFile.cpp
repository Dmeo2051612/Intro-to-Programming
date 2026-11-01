#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    int a[100][100];
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = m - 1;
    int num = 1;

    while(left <= right && top <= bottom) {
        for(int i = left; i <= right; i++) {
            a[top][i] = num;
            num++;
        }
        top++;

        for(int i = top; i <= bottom; i++) {
            a[i][right] = num;
            num++;
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                a[bottom][j] = num++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = num++;
            }
            left++;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}