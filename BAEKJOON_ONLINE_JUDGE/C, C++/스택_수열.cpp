#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n = 1;
    bool possible = true;
    string output = "";
    deque<int> input, stack;

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    for(int i = 0;i < N;i++) {
        if(input[i] < n) {
            if(stack.back() != input[i]) {
                possible = false;
                break;
            }
        }

        while(n <= input[i]) {
            stack.push_back(n++);
            output += "+";
        }

        output += "-";
        stack.pop_back();
    }

    if(!possible) {
        cout << "NO";
    }
    else {
        for(int i = 0;i < N * 2;i++) {
            cout << output[i] << '\n';
        }
    }

    return 0;
}