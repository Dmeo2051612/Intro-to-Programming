#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int *a = new int[100];
    int index = 0;
    int tmp = l;
    while(tmp <= r) {
        a[index++] = tmp;
        tmp++;
    }
    for(int i = 0; i < index; i++) {
        cout << a[i] << " ";
    }
    delete []a;
    return 0;
}