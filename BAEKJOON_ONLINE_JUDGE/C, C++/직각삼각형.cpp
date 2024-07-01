#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> input(3, 0);

    while(1) {
        for(int i = 0;i < 3;i++) {
            cin >> input[i];
        }

        if(input.front() == 0) {
            break;
        }

        sort(input.begin(), input.end());

        if(input[2] * input[2] == input[1] * input[1] + input[0] * input[0]) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
    }

    return 0;
}