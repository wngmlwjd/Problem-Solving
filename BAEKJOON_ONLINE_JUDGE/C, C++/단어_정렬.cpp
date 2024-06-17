#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b) {
    if(a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<string> input;

    cin >> N;
    input.assign(N, "");
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    sort(input.begin(), input.end(), cmp);

    for(int i = 0;i < N;i++) {
        if(i == 0 || (i > 0 && input[i - 1] != input[i])) {
            cout << input[i] << '\n';
        }
    }

    return 0;
}