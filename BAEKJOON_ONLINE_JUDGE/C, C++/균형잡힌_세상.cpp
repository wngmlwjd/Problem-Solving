#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input, output;
    vector<char> check;

    while(1) {
        getline(cin, input);

        if(input == ".") {
            break;
        }

        output = "yes";
        check.clear();
        for(int i = 0;i < input.length();i++) {
            if(input[i] == ')') {
                if(check.back() != '(') {
                    output = "no";
                    break;
                }

                check.pop_back();
            }
            else if(input[i] == ']') {
                if(check.back() != '[') {
                    output = "no";
                    break;
                }

                check.pop_back();
            }
            else if(input[i] == '(' || input[i] == '[') {
                check.push_back(input[i]);
            }
        }

        if(check.size() > 0) {
            output = "no";
        }

        cout << output << '\n';
    }

    return 0;
}