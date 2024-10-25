#include <bits/stdc++.h>
using namespace std;

map<char, pair<char, char>> input;

void f1(char parent) {
    if(parent == '.') {
        return;
    }

    cout << parent;
    f1(input[parent].first);
    f1(input[parent].second);
}

void f2(char parent) {
    if(parent == '.') {
        return;
    }

    f2(input[parent].first);
    cout << parent;
    f2(input[parent].second);
}

void f3(char parent) {
    if(parent == '.') {
        return;
    }
    
    f3(input[parent].first);
    f3(input[parent].second);
    cout << parent;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str;

    cin >> N;
    cin.ignore();
    for(int i = 0;i < N;i++) {
        getline(cin, str);

        input[str[0]] = make_pair(str[2], str[4]);
    }

    f1('A');
    cout << endl;
    f2('A');
    cout << endl;
    f3('A');

    return 0;
}