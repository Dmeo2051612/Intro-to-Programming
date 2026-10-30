#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    long long dx = x1 - x2;
    long long dy = y1 - y2;

    long long d2 = dx * dx + dy * dy;
    long long diff = abs(r1 - r2);
    long long sum = r1 + r2;

    long long diff2 = diff * diff;
    long long sum2 = sum * sum;

    if (d2 < diff2) {
        cout << 1;
    }
    else if (d2 == diff2) {
        cout << 2;
    }
    else if (d2 < sum2) {
        cout << 3;
    }
    else if (d2 == sum2) {
        cout << 4;
    }
    else {
        cout << 5;
    }

    return 0;
}