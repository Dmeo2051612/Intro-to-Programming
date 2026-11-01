#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int *a = new int[n];
    bool coMat = false;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(a[i] == x) {
            coMat = true;
            break;
        }
    }

    if(coMat) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    delete []a;
    return 0;
}