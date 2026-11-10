#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;
    bool isPalindrome = 1;
    while(left <= right) {
        if(a[left] != a[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome) cout << "YES";
    else cout << "NO";

    delete []a;
    return 0;
}