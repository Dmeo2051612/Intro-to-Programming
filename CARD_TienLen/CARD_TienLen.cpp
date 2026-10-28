#include <bits/stdc++.h>
using namespace std;

typedef struct CARD {
    int shape;
    int number;
} CARD;

int rankNumber(int number) {
    if (number == 1) return 14; 
    if (number == 2) return 15; 
    return number;              
}

bool greaterCard(CARD a, CARD b) {
    int rankA = rankNumber(a.number);
    int rankB = rankNumber(b.number);

    if (rankA != rankB) {
        return rankA > rankB;
    }

    return a.shape < b.shape;
}

int main() {
    int k;
    cin >> k;

    CARD a[100];

    for (int i = 0; i < k; i++) {
        cin >> a[i].shape >> a[i].number;
    }

    int maxPos = 0;

    for (int i = 1; i < k; i++) {
        if (greaterCard(a[i], a[maxPos])) {
            maxPos = i;
        }
    }

    cout << a[maxPos].shape << " "
         << a[maxPos].number;

    return 0;
}