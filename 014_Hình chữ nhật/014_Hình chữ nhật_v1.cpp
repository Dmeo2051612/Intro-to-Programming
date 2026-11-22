    #include <iostream>

    using namespace std;

    int main() {
        int a, b, c;
        cin >> a >> b >> c;
        int x;
        if(a == b) {
            x = c;
        } else if(a == c) {
            x = b;
        } else if(b == c) {
            x = a;
        }
        cout << x << endl;
        return 0;
    }