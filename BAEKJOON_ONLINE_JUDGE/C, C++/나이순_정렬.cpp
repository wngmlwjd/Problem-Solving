#include <bits/stdc++.h>
using namespace std;

class Member {
public:
    int num, age;
    string name;

    Member(int num, int age, string name) : num(num), age(age), name(name) {};
};

int cmp(Member a, Member b) {
    if(a.age == b.age) {
        return a.num < b.num;
    }
    return a.age < b.age;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<Member> input;

    cin >> N;
    input.assign(N, Member(0, 0, ""));
    for(int i = 0;i < N;i++) {
        cin >> input[i].age >> input[i].name;
        input[i].num = i;
    }

    sort(input.begin(), input.end(), cmp);

    for(int i = 0;i < N;i++) {
        cout << input[i].age << ' ' << input[i].name << '\n';
    }

    return 0;
}