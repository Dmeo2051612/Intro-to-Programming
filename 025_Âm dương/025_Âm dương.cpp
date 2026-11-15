#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    int *am = new int[n];
    int index_am = 0;
    int *duong = new int[n];
    int index_duong = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(a[i] > 0) duong[index_duong++] = a[i];
        else am[index_am++] = a[i];
    }

    int *res = new int[n];
    int tmp_am = index_am;
    int tmp_duong = index_duong;
    int index = 0;
    while(index_am > 0) {
        res[index++] = am[tmp_am - index_am];
        index_am--;
    }
    for(int i = index; i < n; i++) {
        res[i] = duong[tmp_duong - index_duong];
        index_duong--;
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