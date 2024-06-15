#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    string input, tmp;
    vector<string> alpha = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};

    cin >> input;

    for(int i = 0;i < input.length();i++) {
        if(i + 2 < input.length() && input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') {
            i += 2;
        }
        else if(i + 1 < input.length()) {
            tmp = input[i];
            tmp += input[i + 1];

            if(find(alpha.begin(), alpha.end(), tmp) != alpha.end()) {
                i++;
            }
        }

        count++;
    }

    cout << count;

    return 0;
}