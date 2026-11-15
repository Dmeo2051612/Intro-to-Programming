#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int *le = new int[n];
    int index = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i % 2 == 0) le[index++] = a[i];
    }

    for(int i = index - 1; i >= 0; i--) {
        cout << le[i] << " ";
    }
    delete []a;
    delete []le;
    return 0;
}