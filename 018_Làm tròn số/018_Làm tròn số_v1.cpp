#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = a / b;
    if(a % b != 0) {
        x++;
    }
    cout << x;
    return 0;
}