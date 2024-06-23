#include <bits/stdc++.h>
using namespace std;

vector<int> hanoi;
vector<pair<int, int>> output;

void f(int a, int b) {
    if(a > 1) {
        f(a - 1, 6 - (b + hanoi[a - 2]));
    }

    output.push_back(make_pair(hanoi[a - 1], b));
    hanoi[a - 1] = b;

    if(a > 1 ){
        f(a - 1, b);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    hanoi.assign(N, 1);

    f(N, 3);

    cout << output.size() << '\n';
    for(int i = 0;i < output.size();i++) {
        cout << output[i].first << ' ' << output[i].second << '\n';
    }

    return 0;
}