#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = -1000001;
    int res = -1000001;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            res = max;
            max = a[i];
        }
        else if(a[i] < max && a[i] > res) res = a[i];
    }
    cout << res;
    delete []a;
    return 0;
}