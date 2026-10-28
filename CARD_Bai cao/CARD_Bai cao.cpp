#include <bits/stdc++.h>
using namespace std;

typedef struct CARD {
    int shape;
    int number;
} CARD;

int main() {
    CARD a[3];
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        cin >> a[i].shape >> a[i].number;

        if (a[i].number >= 11 && a[i].number <= 13) {
            cnt++;
        }

        if (a[i].number >= 2 && a[i].number <= 9) {
            sum += a[i].number;
        } else if (a[i].number == 1) {
            sum += 1;
        }
    }

    if (cnt == 3) {
        cout << 10;
    } else {
        cout << sum % 10;
    }

    return 0;
}