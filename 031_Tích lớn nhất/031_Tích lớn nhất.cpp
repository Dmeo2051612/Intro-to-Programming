#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long *a = new long long[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long res = LLONG_MIN;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            long long tmp = a[i] * a[j];
            if(tmp > res) res = tmp;
        }
    }
    cout << res << endl;

    delete []a;
    return 0;
}