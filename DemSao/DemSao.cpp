#include<bits/stdc++.h>
using namespace std;

int Count(int m, int n, int i, int j, char a[100][20]) {
    int res = 0;
    if(i > 0 && a[i - 1][j] == '*') res++;
    if(i < m - 1 && a[i + 1][j] == '*') res++;
    if(j > 0 && a[i][j - 1] == '*') res++;
    if(j < n - 1 && a[i][j + 1] == '*') res++;
    
    return res;
}

int main() {
    int m, n; cin >> m >> n;
    char a[100][20];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == '0') {
                int tmp = Count(m, n, i, j, a);
                a[i][j] = tmp + '0';
            }
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