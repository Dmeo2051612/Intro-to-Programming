#include <bits/stdc++.h>
using namespace std;

int main() {
    bool coMat[31] = {};

    for (int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        coMat[x] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (!coMat[i]) {
            cout << i << " ";
        }
    }

    return 0;
}