#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> input, sortSize;
    map<int, int> output;

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];

        if(output.find(input[i]) == output.end()) {
            output.insert({input[i], 0});
            sortSize.push_back(input[i]);
        }
    }

    sort(sortSize.begin(), sortSize.end());

    for(int i = 0;i < sortSize.size();i++) {
        output[sortSize[i]] = i;
    }

    for(int i = 0;i < N;i++) {
        cout << output[input[i]] << ' ';
    }

    return 0;
}