#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string input;
    vector<string> output;
    set<string> name;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> input;
        
        name.insert(input);
    }
    for(int i = 0;i < M;i++) {
        cin >> input;

        if(name.find(input) != name.end()) {
            output.push_back(input);
        }
    }

    sort(output.begin(), output.end());

    cout << output.size() << '\n';
    for(int i = 0;i < output.size();i++) {
        cout << output[i] << '\n';
    }

    return 0;
}