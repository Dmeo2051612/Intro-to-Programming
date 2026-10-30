#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    string res = "";

    for (int i = 0; i < s.length(); i++) {
        if (t.find(s[i]) == string::npos) {
            res += s[i];
        }
    }

    cout << res;

    return 0;
}