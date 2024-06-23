#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b, count;
    bool palindrome;
    string input;

    cin >> T;

    while(T--) {
        cin >> input;

        a = count = 0;
        b = input.length() - 1;
        palindrome = true;
        while(a < b) {
            if(input[a] != input[b]) {
                palindrome = false;
                break;
            }

            a++;
            b--;
            count++;
        }

        cout << palindrome << ' ' << count + 1 << '\n';
    }

    return 0;
}