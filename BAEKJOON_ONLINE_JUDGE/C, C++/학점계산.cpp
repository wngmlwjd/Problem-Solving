#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    string input;
    vector<vector<float>> output = {{4.3, 4.0, 3.7}, {3.3, 3.0, 2.7}, {2.3, 2.0, 1.7}, {1.3, 1.0, 0.7}};

    cin >> input;

    if(input == "F") {
        cout << "0.0";
        return 0;
    }

    a = int(input.front() - 'A');
    if(input.back() == '+') {
        b = 0;
    }
    else if(input.back() == '0') {
        b = 1;
    }
    else {
        b = 2;
    }

    cout << fixed;
    cout.precision(1);
    cout << output[a][b];

    return 0;
}