#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    bool *isCheck = new bool[n]();
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        if(isCheck[i]) continue;
        int tmp = 0;
        for(int j = i; j < n; j++) {
            if(a[j] <= 0) break;
            tmp++;
            isCheck[j] = 1;
        }
        if(tmp > res) res = tmp;
    }
    cout << res;
    delete []a;
    delete []isCheck;
    return 0;
}