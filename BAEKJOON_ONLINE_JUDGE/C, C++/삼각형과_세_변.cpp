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

        sort(input.begin(), input.end());

        if(input.back() == 0) {
            break;
        }

        if(input[0] + input[1] <= input[2]) {
            cout << "Invalid\n";
        }
        else if(input.front() == input.back()) {
            cout << "Equilateral\n";
        }
        else if(input[0] == input[1] || input[1] == input[2]) {
            cout << "Isosceles\n";
        }
        else {
            cout << "Scalene\n";
        }
    }

    return 0;
}