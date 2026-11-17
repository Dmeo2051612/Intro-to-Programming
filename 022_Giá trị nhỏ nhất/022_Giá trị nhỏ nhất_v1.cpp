#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < res) res = a[i];
    }

    cout << res;
    delete []a;
    return 0;
}