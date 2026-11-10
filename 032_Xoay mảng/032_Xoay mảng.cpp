#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while(k > 0) {
        int tmp = a[0];
        for(int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = tmp;
        k--;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete []a;
    return 0;
}