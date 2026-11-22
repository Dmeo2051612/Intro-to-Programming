#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    int tmp = x;
    int arr[4] = {a, b, c, d};
    int arr2[4];
    int index = 0;

    while(index < 3) {
        if(tmp >= 50) {
            arr2[index++] = 50;
            tmp -= 50;
        }
        else {
            arr2[index++] = tmp;
            tmp = 0;
        }
    }

    arr2[3] = tmp;

    int res = 0;

    for(int i = 0; i < 4; i++) {
        res += arr[i] * arr2[i];
    }

    cout << res;

    return 0;
}