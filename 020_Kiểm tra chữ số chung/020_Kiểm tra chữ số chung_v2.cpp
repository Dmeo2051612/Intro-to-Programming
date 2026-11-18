#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool check[10] = {};
    bool isValid = 0;

    while(a > 0) {
        check[a % 10] = 1;
        a /= 10;
    }

    while(b > 0) {
        int digit = b % 10;
        
        if(check[digit]) {
            isValid = 1;
            break;
        }
        b /= 10;
    }

    cout << (isValid ? 1 : 0);
    return 0;
}