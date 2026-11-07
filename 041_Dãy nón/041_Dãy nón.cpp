#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int peak = 0;

    for(int i = 1; i < n; i++) {
        if(a[i] > a[peak]) {
            peak = i;
        }
    }

    bool check = true;

    for(int i = 1; i <= peak; i++) {
        if(a[i] <= a[i - 1]) {
            check = false;
            break;
        }
    }

    for(int i = peak + 1; i < n; i++) {
        if(a[i] >= a[i - 1]) {
            check = false;
            break;
        }
    }

    cout << (check ? "YES" : "NO");

    return 0;
}