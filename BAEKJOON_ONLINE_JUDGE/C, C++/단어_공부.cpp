#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    vector<pair<int, char>> output;

    cin >> input;

    for(int i = 0;i < 26;i++) {
        output.push_back(make_pair(0, 'A' + i));
    }

    for(int i = 0;i < input.length();i++) {
        output[int(toupper(input[i])) - 'A'].first++;
    }

    sort(output.begin(), output.end());

    if(output[25].first == output[24].first) {
        cout << "?";
    }
    else {
        cout << output.back().second;
    }

    return 0;
}