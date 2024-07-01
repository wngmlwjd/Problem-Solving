#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<char> input, output;

bool isVowel() {
    int cnt = 0;
    string vowel = "aeiou";

    for(int i = 0;i < M;i++) {
        if(vowel.find(output[i]) != string::npos) {
            cnt++;
        }
    }

    if(cnt > 0 and cnt < M - 1) {
        return true;
    }
    return false;
}

void password(int n) {
    if(output.size() == M) {
        if(isVowel()) {
            for(int i = 0;i < M;i++) {
                cout << output[i];
            }
            cout << '\n';
        }
        return;
    }
    else if(n == N) {
        return;
    }

    output.push_back(input[n]);
    password(n + 1);
    output.pop_back();
    password(n + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;
    input.assign(N, ' ');
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }
    sort(input.begin(), input.end());

    password(0);

    return 0;
}