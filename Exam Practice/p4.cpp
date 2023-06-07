#include <bits/stdc++.h>
using namespace std;
void binary(int n)
{
    queue<string> bq;
    bq.push("1");
    while (n--)
    {
        string bn=bq.front();
        bq.pop();
        cout<<bn<<endl;
        bq.push(bn+"0");
        bq.push(bn+"1");
    }   
}
int main()
{
    int n;
    cin >> n;
    binary(n);
    return 0;
}