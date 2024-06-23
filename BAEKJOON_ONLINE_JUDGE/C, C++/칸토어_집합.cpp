#include <bits/stdc++.h>
using namespace std;

string output;

void erase(int start, int end) {
    if(start == end) {
        return;
    }

    int a, b, n = (end - start + 1) / 3;

    a = start + n;
    b = end - n + 1;
    for(int i = a;i < b;i++) {
        output[i] = ' ';
    }

    erase(start, a - 1);
    erase(b, end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    while(1) {
        cin >> N;

        if(cin.eof()) {
            break;
        }

        output = "";
        for(int i = 0;i < pow(3, N);i++) {
            output += "-";
        }

        erase(0, output.length() - 1);

        cout << output << "\n";
    }    

    return 0;
}