#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string input;
    map<string, int> count;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> input;

        if(count.find(input) == count.end()) {
            count[input] = 1;
        }
        else {
            count[input]++;
        }
    }

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> input;

        cout << count[input] << ' ';
    }

    return 0;
}