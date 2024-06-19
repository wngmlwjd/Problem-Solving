#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a, b, dis;
    vector<int> input, distance;

    cin >> N >> a;
    for(int i = 0;i < N - 1;i++) {
        cin >> b;

        input.push_back(a);
        distance.push_back(b - a);
        a = b;
    }
    input.push_back(a);

    dis = distance.front();
    for(int i = 1;i < N - 1;i++) {
        dis = __gcd(dis, distance[i]);
    }

    cout << (input.back() - input.front()) / dis - N + 1;

    return 0;
}