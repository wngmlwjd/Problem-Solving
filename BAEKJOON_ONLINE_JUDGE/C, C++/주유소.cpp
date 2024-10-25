#include <bits/stdc++.h>
using namespace std;

vector<int> dist(100000, 0), price(100000, 0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, minPrice;
    long long sum = 0;

    cin >> N;
    for(int i = 0;i < N - 1;i++) {
        cin >> dist[i];
    }
    for(int i = 0;i < N;i++) {  
        cin >> price[i];
    }

    minPrice = price.front();
    for(int i = 0;i < N - 1;i++) {
        minPrice = minPrice > price[i] ? price[i] : minPrice;

        sum += (long long)minPrice * (long long)dist[i];
    }

    cout << sum;

    return 0;
}