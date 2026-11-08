#include <bits/stdc++.h>
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
    int *res = new int[n];
    bool *isChecked = new bool[n]();
    int index = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(isChecked[i]) continue;
        else {
            isChecked[i] = 1;
            res[index] = a[i];
            index++;
            for(int j = 0; j < n; j++) {
                if(a[i] == a[j]) {
                    isChecked[j] = 1;
                }
            }
        }
    }

    Sort(res, index);
    for(int i = 0; i < index; i++) {
        cout << res[i] << " ";
    }
    delete []a;
    delete []res;
    delete []isChecked;
    return 0;
}