#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string a, b;
    set<string> dance;

    cin >> T;

    dance.insert("ChongChong");
    while(T--) {
        cin >> a >> b;

        if(dance.count(a)) {
            dance.insert(b);
        }
        else if(dance.count(b)) {
            dance.insert(a);
        }
    }

    cout << dance.size();

    return 0;
}