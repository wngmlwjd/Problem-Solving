#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    bool palindrome = true;
    string input;

    cin >> input;

    a = 0;
    b = input.length() - 1;
    while(a <= b) {
        if(input[a] != input[b]) {
            palindrome = false;
            break;
        }

        a++;
        b--;
    }

    cout << palindrome;

    return 0;
}