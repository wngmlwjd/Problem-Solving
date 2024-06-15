#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input, N, n;
    string output = "";

    cin >> input >> N;

    while(input > 0) {
        n = input % N;
        input /= N;

        if(n < 10) {
            output += to_string(n);
        }
        else {
            output += char(n + int('A') - 10);
        }
    }

    for(int i = output.length() - 1;i >= 0;i--) {
        cout << output[i];
    }

    return 0;
}