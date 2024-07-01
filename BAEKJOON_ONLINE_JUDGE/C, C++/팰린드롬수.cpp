#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    bool palindrome;
    string input;

    while(1) {
        cin >> input;

        if(input == "0") {
            break;
        }

        a = 0;
        b = input.length() - 1;
        palindrome = true;
        while(a < b) {
            if(input[a] != input[b]) {
                palindrome = false;
                break;
            }
            a++;
            b--;
        }

        if(palindrome) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}