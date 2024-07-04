#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string input) {
    int a, b;

    a = 0;
    b = input.length() - 1;
    while(a < b) {
        if(input[a] != input[b]) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    bool palindrome;
    string output;
    vector<string> input;

    cin >> T;

    while(T--) {
        cin >> N;
        input.assign(N, "");
        for(int i = 0;i < N;i++) {
            cin >> input[i];
        }

        palindrome = false;
        output = "0";
        for(int i = 0;i < N - 1;i++) {
            for(int j = i + 1;j < N;j++) {
                if(isPalindrome(input[i] + input[j])) {
                    output = input[i] + input[j];
                    palindrome = true;
                    break;
                }
                if(isPalindrome(input[j] + input[i])) {
                    output = input[j] + input[i];
                    palindrome = true;
                    break;
                }
            }

            if(palindrome) {
                break;
            }
        }

        cout << output << '\n';
    }

    return 0;
}