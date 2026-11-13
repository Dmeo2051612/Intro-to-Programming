#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    const int N = 1000;
    int a[N];
    int n;
    cin >> n;
    if(n <= 0 || n > N) {
        return 1;
    }

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0;
    int index = a[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] > index) {
            dem++;
            index = a[i];
        }
    }
    cout << dem << endl;
    return 0;
}


    