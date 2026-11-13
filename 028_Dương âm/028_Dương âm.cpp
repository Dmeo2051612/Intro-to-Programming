#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int *am = new int[n];
    int *duong = new int[n];
    int index_am = 0;
    int index_duong = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(a[i] < 0) am[index_am++] = a[i];
        else duong[index_duong++] = a[i];
    }
    
    int tmp_am = index_am;
    int tmp_duong = index_duong;
    int *res = new int[n];
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(index_am == 0) {
                res[i] = duong[tmp_duong - index_duong];
                index_duong--;
            }
            else {
                res[i] = am[tmp_am - index_am];
                index_am--;
            }
        }
        else {
            if(index_duong == 0) {
                res[i] = am[tmp_am - index_am];
                index_am--;
            }
            else {
                res[i] = duong[tmp_duong - index_duong];
                index_duong--;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }

    delete []a;
    delete []am;
    delete []duong;
    delete []res;
    return 0;
}