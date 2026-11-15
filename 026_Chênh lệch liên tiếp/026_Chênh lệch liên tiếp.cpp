#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = -1;
    for(int i = 0; i < n - 1; i++) {
        int tmp = abs(a[i] - a[i + 1]);
        if(tmp > max) {
            max = tmp;
        }
    }
    cout << max;
    delete []a;
    return 0;
}