#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    long long int T;
    char n;
    string input;

    cin >> input >> T;

    cnt.assign(input.length() + 1, vector<int>(26, 0));
    for(long long int i = 1;i <= input.length();i++) {
        cnt[i] = cnt[i - 1];
        cnt[i][int(input[i - 1] - 'a')]++;
    }

    while(T--) {
        cin >> n >> a >> b;

        cout << cnt[b + 1][int(n - 'a')] - cnt[a][int(n - 'a')] << endl;
    }

    return 0;
}