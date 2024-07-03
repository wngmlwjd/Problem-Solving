#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    cin >> input;

    if(input == "NLCS") {
        cout << "North London Collegiate School";
    }
    else if(input == "BHA") {
        cout << "Branksome Hall Asia";
    }
    else if(input == "KIS") {
        cout << "Korea International School";
    }
    else {
        cout << "St. Johnsbury Academy";
    }

    return 0;
}