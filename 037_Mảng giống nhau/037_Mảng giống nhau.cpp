#include<bits/stdc++.h>
using namespace std;

void Sort(int a[100], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    bool isSame = 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    Sort(a, n);
    Sort(b, n);

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            isSame = 0;
            break;
        }
    }
    if(isSame) cout << "YES";
    else cout << "NO";

    delete []a;
    delete []b;
    return 0;
}