#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[1000];
    int index = 0;
    for(int i = n; i > 0; i--) {
        if(i % 2 == 0) a[index++] = i;
    }
    for(int i = 0; i < index; i++) {
        cout << a[i] << " ";
    }
    return 0;
}