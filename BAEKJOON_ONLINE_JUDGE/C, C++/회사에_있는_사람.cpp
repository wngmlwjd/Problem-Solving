#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string a, b;
    set<string, greater<string>> name;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> a >> b;

        if(b == "enter") {
            name.insert(a);
        }
        else {
            name.erase(a);
        }
    }

    for(set<string>::iterator iter = name.begin();iter != name.end();iter++) {
        cout << *iter << '\n';
    }

    return 0;
}