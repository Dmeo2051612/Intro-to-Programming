#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = a, y = b;

    while(y != 0) {
        long long tmp = y;
        y = x % y;
        x = tmp;
    }

    long long res = a / x * b;

    cout << res;

    return 0;
}