#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3], d;

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 3; i++) {
        int count = 0;

        for(int j = 0; j < 3; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count == 1) {
            d = a[i];
            break;
        }
    }

    cout << d;

    return 0;
}