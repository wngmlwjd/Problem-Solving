#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool find;
    string input, bomb, tmp;
    vector<char> check;

    cin >> input >> bomb;

    for(int i = 0;i < input.length();i++) {
        check.push_back(input[i]);

        if(check.size() >= bomb.length()) {
            find = true;
            for(int i = 0;i < bomb.length();i++) {
                if(check[check.size() - bomb.length() + i] != bomb[i]) {
                    find = false;
                    break;
                }
            }

            if(find) {
                for(int i = 0;i < bomb.length();i++) {
                    check.pop_back();
                }
            }
        }
    }

    if(check.size() == 0) {
        cout << "FRULA";
    }
    else {
        for(int i = 0;i < check.size();i++) {
            cout << check[i];
        }
    }

    return 0;
}