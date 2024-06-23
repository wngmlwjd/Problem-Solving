#include <bits/stdc++.h>
using namespace std;

vector<int> input, change;

void merge(int start, int end) {
    sort(input.begin() + start, input.begin() + end + 1);

    for(int i = start;i <= end;i++) {
        change.push_back(input[i]);
    }
}

void merge_sort(int a, int b) {
    if(a < b) {
        merge_sort(a, (a + b) / 2);
        merge_sort((a + b) / 2 + 1, b);
        merge(a, b);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N >> K;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    merge_sort(0, N - 1);

    if(K > change.size()) {
        cout << -1;
    }
    else {
        cout << change[K - 1];
    }

    return 0;
}