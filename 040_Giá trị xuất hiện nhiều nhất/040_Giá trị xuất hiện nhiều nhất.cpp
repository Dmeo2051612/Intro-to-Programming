#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    bool *check = new bool[n]();

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res;
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(check[i]) continue;

        int count = 0;
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                check[j] = 1;
            }
        }

        if(count > max || count == max && a[i] > res) {
            res = a[i];
            max = count;
        }
    }

    cout << res << endl;
    delete []a;
    delete []check;
    return 0;
}