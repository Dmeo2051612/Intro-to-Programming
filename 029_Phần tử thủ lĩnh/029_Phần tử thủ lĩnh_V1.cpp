#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < n - 1; i++) {
        bool isValid = 1;
        for(int j = i + 1; j < n;j++) {
            if(a[i] <= a[j]) {
                isValid = 0;
                break;
            }
        }
        if(isValid) res++;
    }
    cout << res;
    delete []a;
    return 0;
}