#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int *x = new int[1000];
    int *y = new int[1000];
    int index_x = 0;
    int index_y = 0;
    for(int i = a; i <= b; i++) {
        x[index_x++] = i;
    }

    for(int i = c; i <= d; i++) {
        y[index_y++] = i;
    }

    bool isValid = 0;
    for(int i = 0; i < index_x; i++) {
        for(int j = 0; j < index_y; j++) {
            if(x[i] == y[j]) {
                isValid = 1;
                break;
            }
        }
    }
    cout << (isValid ? "YES" : "NO");
    delete []x;
    delete []y;
    return 0;   
}