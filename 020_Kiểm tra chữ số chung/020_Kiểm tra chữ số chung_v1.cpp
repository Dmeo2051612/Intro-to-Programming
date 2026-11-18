#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int *x = new int[2];
    int *y = new int[2];
    int index_x = 0;
    int index_y = 0;
    bool isValid = 0;

    while(a > 0) {
        x[index_x++] = a % 10;
        a /= 10;
    }

    while (b > 0) {
        y[index_y++] = b % 10;
        b /= 10;
    }

    for(int i = 0; i < index_x; i++) {
        for(int j = 0; j < index_y; j++) {
            if(x[i] == y[j]) {
                isValid = 1;
                break;
            }
        }
    }
    cout << (isValid ? 1 : 0);
    delete []x;
    delete []y;
    return 0;
}