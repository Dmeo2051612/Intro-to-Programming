#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int *a = new int[100];
    int index = 0;
    for(int i = l; i <= r; i++) {
        a[index++] = i;
    }
    for(int i = 0; i < index; i++) {
        cout << a[i] << " ";
    }
    delete []a;
    return 0;
}