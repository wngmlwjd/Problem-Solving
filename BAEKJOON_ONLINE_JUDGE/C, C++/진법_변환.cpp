#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0, n = 1;
    string input;

    cin >> input >> N;

    for(int i = input.length() - 1;i >= 0;i--) {
        if(isalpha(input[i])) {
            sum += (int(input[i]) - 'A' + 10) * n;
        }
        else {
            sum += (int(input[i]) - '0') * n;
        }

        n *= N;
    }

    cout << sum;

    return 0;
}