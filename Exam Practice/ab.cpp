#include <bits/stdc++.h>
using namespace std;
void binary(int N) {
    queue<string> bq;
    bq.push("1");

    while (N--) {
        string bn = bq.front();
        bq.pop();
        cout << bn << endl;
        bq.push(bn + "0");
        bq.push(bn + "1");
    }
}

int main() {
    int N;
    cin >> N;
    binary(N);
    return 0;
}
