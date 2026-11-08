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
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    Sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";    
    }

    delete []a;
    return 0;
}