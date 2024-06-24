#include <bits/stdc++.h>
using namespace std;

vector<vector<vector<int>>> output(101, vector<vector<int>>(101, vector<int>(101, 0)));

int w(int a, int b, int c) {
    if(a <= 0 or b <= 0 or c <= 0) {
        return 1;
    }
    else if(output[a + 50][b + 50][c + 50]) {
        return output[a + 50][b + 50][c + 50];
    }
    else if(a > 20 or b > 20 or c > 20) {
        output[a + 50][b + 50][c + 50] = w(20, 20, 20);
        return output[a + 50][b + 50][c + 50];
    }
    else if(a < b and b < c) {
        output[a + 50][b + 50][c + 50] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return output[a + 50][b + 50][c + 50];
    }
    output[a + 50][b + 50][c + 50] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return output[a + 50][b + 50][c + 50];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    while(1) {
        cin >> a >> b >> c;

        if(a == -1 and b == -1 and c == -1) {
            break;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }

    return 0;
}