#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int output = 0;
    vector<string> input(3, "");

    for(int i = 0;i < 3;i++) {
        cin >> input[i];

        if(atoi(input[i].c_str()) != 0) {
            output = stoi(input[i]) + 3 - i;
        }
    }

    if(output % 3 == 0 and output % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if(output % 3 == 0) {
        cout << "Fizz";
    }
    else if(output % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << output;
    }
    
    return 0;
}