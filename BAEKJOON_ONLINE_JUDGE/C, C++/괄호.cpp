#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string input, output;
    vector<char> check;

    cin >> T;

    while(T--) {
        cin >> input;

        output = "YES";
        check.clear();
        check.push_back(input[0]);
        for(int i = 1;i < input.size();i++) {
            if(input[i] == ')') {
                if(check.back() != '(') {
                    output = "NO";
                    break;
                }

                check.pop_back();
            }
            else {
                check.push_back(input[i]);
            }
        }

        if(check.size() > 0) {
            output = "NO";
        }

        cout << output << '\n';
    }

    return 0;
}