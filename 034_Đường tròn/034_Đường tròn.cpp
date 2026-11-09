#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int x, y;
    cin >> x >> y;

    int distance1 = 0;
    int i = x;

    while(i != y) {
        distance1 += a[i - 1];

        i++;

        if(i > n) {
            i = 1;
        }
    }

    int distance2 = sum - distance1;

    cout << min(distance1, distance2);

    return 0;
}