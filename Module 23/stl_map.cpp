#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp; // map<key, value>
    // mp.insert(make_pair("abc", 1)); //pair banai
    // mp.insert({"Sakib Al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 95});
    // mp.insert({"Mushfiqur Rahim", 85});
    // mp.insert({"Mahmudullah Riyad", 65});
    // mp.insert({"alo", 0});

    mp["Sakib al Hasan"] = 75;
    mp["Tamim Iqbal"] = 95;
    mp["Mushfiqur Rahim"] = 85;
    mp["Mahmudullah Riyad"] = 65;
    mp["alo"] = 0;

    // for(auto it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // cout<<mp["alo"];
    // if(mp.find("alo") != mp.end()) cout << "Found" << endl;
    // else cout << "Not Found" << endl;

    // if(mp.count("alo")) cout << "Found" << endl;
    // else cout << "Not Found" << endl;
    
    return 0;
}