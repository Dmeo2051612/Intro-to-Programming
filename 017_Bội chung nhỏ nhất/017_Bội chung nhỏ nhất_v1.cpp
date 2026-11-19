#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (1LL * a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;
    return 0;
}
