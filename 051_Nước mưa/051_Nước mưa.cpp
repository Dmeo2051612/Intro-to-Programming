#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int a[500];
    int leftMax[500], rightMax[500];

    for (int i = 0; i < W; i++) {
        cin >> a[i];
    }

    leftMax[0] = a[0];

    for (int i = 1; i < W; i++) {
        leftMax[i] = max(leftMax[i - 1], a[i]);
    }

    rightMax[W - 1] = a[W - 1];

    for (int i = W - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], a[i]);
    }

    int res = 0;

    for (int i = 0; i < W; i++) {
        int water = min(leftMax[i], rightMax[i]) - a[i];

        res += water;
    }

    cout << res;

    return 0;
}