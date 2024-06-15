#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    double credit, sum = 0, creditSum = 0;
    string subject, grade;
    vector<double> score = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0};

    for(int i = 0;i < 20;i++) {
        cin >> subject >> credit >> grade;

        if(grade != "P") {
            creditSum += credit;

            if(grade != "F") {
                n = (int(grade[0]) - 'A') * 2 + (grade[1] == '0' ? 1 : 0);
                sum += credit * score[n];
            }
        }
    }

    cout << fixed;
    cout.precision(10);
    cout << sum / creditSum;

    return 0;
}