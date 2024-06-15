#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    string input;

    while(1) {
        cin >> input;
        
        if(cin.eof()) {
            break;
        }

        count++;
    }

    cout << count;

    return 0;
}