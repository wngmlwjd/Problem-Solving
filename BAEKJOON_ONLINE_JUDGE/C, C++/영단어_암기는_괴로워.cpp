#include <bits/stdc++.h>
using namespace std;

int cmp(pair<string, int> a, pair<string, int> b) {
    if(a.second == b.second) {
        if(a.first.length() == b.first.length()) {
            return a.first < b.first;
        }
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, cnt;
    string word, pre;
    vector<string> input;
    vector<pair<string, int>> output;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> word;

        if(word.length() >= M) {
            input.push_back(word);
        }
    }

    sort(input.begin(), input.end());

    pre = input[0];
    cnt = 0;
    for(int i = 0;i < input.size();i++) {
        if(input[i] != pre) {
            output.push_back(make_pair(pre, cnt));
            cnt = 1;
            pre = input[i];
        }
        else {
            cnt++;
        }

        if(i == input.size() - 1) {
            output.push_back(make_pair(pre, cnt));
        }
    }

    sort(output.begin(), output.end(), cmp);

    for(int i = 0;i < output.size();i++) {
        cout << output[i].first << '\n';
    }

    return 0;
}