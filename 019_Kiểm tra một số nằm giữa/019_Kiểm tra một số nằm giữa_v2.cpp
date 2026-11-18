#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool isValid = 0;
    if(a >= 10 && a <= 20) {
        if(b < 10 || b > 20) isValid = 1;
    }

    if(b >= 10 && b <= 20) {
        if(a < 10 || a > 20) isValid = 1;
    }

    cout << (isValid ? 1 : 0);
    return 0;
}