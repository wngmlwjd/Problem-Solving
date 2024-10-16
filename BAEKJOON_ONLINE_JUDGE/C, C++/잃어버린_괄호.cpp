#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, sum = 0;
    string str;
    vector<int> input;

    cin >> str;

    str += "-";
    for(int i = 0;i < str.length();i++) {
        if(isdigit(str[i])) {
            n *= 10;
            n += int(str[i] - '0');
        }
        else {
            sum += n;
            n = 0;

            if(str[i] == '-') {
                input.push_back(sum);
                sum = 0;
            }
        }
    }
    sum = input.front();
    for(int i = 1;i < input.size();i++) {
        sum -= input[i];
    }

    cout << sum;

    return 0;
}