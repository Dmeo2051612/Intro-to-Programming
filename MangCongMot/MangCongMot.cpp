#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n + 1];
    a[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    bool isNho = 0;
    for(int i = n; i >= 0; i--) {
        if(i == n) {
            if(a[i] == 9) {
                isNho = 1;
                a[i] = 0;
            }
            else {
                a[i]++;
                isNho = 0;
            }
        }
        
        else{
            if(isNho == 1) {
                if(a[i] == 9) {
                    a[i] = 0;
                }
                else {
                    isNho = 0;
                    a[i]++;
                }
            }
        }
    }
    
   int start = (a[0] == 0) ? 1 : 0;
   for(int i = start; i <= n; i++) {
    cout << a[i];
   }

    delete[] a;
    return 0;
}