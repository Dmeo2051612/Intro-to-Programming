#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    bool *isChecked = new bool[n]();
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        if(isChecked[i]) continue;
        int tmp = 0;
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                tmp++;
                isChecked[j] = 1;
            }
        }
        if(tmp > 2) res++;
    }
    cout << res << endl;
    delete []a;
    delete []isChecked;
    return 0;   
}