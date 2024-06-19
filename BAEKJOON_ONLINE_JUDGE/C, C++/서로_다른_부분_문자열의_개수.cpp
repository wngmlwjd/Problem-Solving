#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, len;
    string input, tmp;
    set<string> count;

    cin >> input;

    len = input.length();
    n = 1;

    while(n <= len) {
        tmp = input.substr(0, n);
        for(int i = n;i < len;i++) {
            count.insert(tmp);

            tmp = tmp.substr(1) + input[i];
        }
        count.insert(tmp);

        n++;
    }

    cout << count.size();

    return 0;
}