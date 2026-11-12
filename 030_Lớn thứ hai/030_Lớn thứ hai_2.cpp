#include <bits/stdc++.h>
using namespace std;

int* duplicate_removal(int a[100], int n, int &index) {
    int *res = new int[n];
    bool *isChecked = new bool[n]();
    index = 0;
    for(int i = 0; i < n; i++) {
        if(isChecked[i]) continue;
        res[index++] = a[i];
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                isChecked[j] = 1;
            }
        }
    }
    delete []isChecked;
    return res;
}

void sort(int a[100], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1- i; j++) {
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
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int index;
    a = duplicate_removal(a, n, index);
    sort(a, index);
    cout << a[n - 2];
    delete []a;
    return 0;
}