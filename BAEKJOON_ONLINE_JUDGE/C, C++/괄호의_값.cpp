#include <bits/stdc++.h>
using namespace std;

int bracket(string input) {
    int sum = 0, n;
    string next = "";
    deque<char> check;

    if(input == "()") {
        return 2;
    }
    else if(input == "[]") {
        return 3;
    }
    else if(input == "") {
        return 1;
    }

    for(int i = 0;i < input.length();i++) {
        if(input[i] == '(' || input[i] == '[') {
            check.push_back(input[i]);
        }
        else if(check.size() == 0) {
            return 0;
        }
        else if(input[i] == ')' && check.back() == '(') {
            check.pop_back();
        }
        else if(input[i] == ']' && check.back() == '[') {
            check.pop_back();
        }
        else {
            return 0;
        }
        next += input[i];

        if(check.size() == 0) {
            n = bracket(next.substr(1, next.length() - 2));
            if(n == 0) {
                return 0;
            }

            if(next.front() == '(') {
                sum += n * 2;
            }
            else {
                sum += n * 3;
            }

            next = "";
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    cin >> input;

    cout << bracket(input);

    return 0;
}