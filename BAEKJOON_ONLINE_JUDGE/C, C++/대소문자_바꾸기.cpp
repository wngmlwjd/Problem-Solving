#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    cin >> input;

    for(int i = 0;i < input.length();i++) {
        if(islower(input[i])) {
            input[i] = toupper(input[i]);
        }
        else {
            input[i] = tolower(input[i]);
        }
    }

    cout << input;

    return 0;
}