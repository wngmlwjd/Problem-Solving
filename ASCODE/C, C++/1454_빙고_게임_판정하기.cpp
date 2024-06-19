#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, count = 0;
    vector<int> col(5, 0), row(5, 0), cross(2, 0);
    vector<pair<int, int>> index(26, pair<int, int>(0, 0));


    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            cin >> N;

            index[N] = pair<int, int>(i, j);
        }
    }

    cin >> T;
    
    while(T--) {
        cin >> N;

        row[index[N].first]++;
        col[index[N].second]++;
        
        if(index[N].first == index[N].second) {
            cross[0]++;
        }
        if(index[N].first + index[N].second == 4) {
            cross[1]++;
        }
    }

    for(int i = 0;i < 5;i++) {
        if(row[i] == 5) {
            count++;
        }
        if(col[i] == 5) {
            count++;
        }
        if(i < 2 && cross[i] == 5) {
            count++;
        }
    }

    cout << count;

    return 0;
}