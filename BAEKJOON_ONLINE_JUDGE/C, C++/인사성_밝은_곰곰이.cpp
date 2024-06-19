#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, count = 0;
    bool enter = false;
    string input;
    set<string> check;

    cin >> T;

    while(T--) {
        cin >> input;

        if(input == "ENTER") {
            enter = true;
            count += check.size();
            check.clear();
        }
        else if(enter) {
            check.insert(input);
        }
    }

    cout << count + check.size();

    return 0;
}