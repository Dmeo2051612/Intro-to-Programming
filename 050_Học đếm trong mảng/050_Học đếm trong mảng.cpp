#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int *a = new int[n];
    int res = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == x) res++;
    }
    cout << res;

    delete []a;
    return 0;
}