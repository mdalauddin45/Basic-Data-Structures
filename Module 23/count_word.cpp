#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    map<string, int> mp;
    while (ss >> s)
    {
        mp[s]++; // mp[s] = mp[s] + 1;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}