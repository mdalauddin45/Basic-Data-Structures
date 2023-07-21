#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        map<string,int> mp;
        string word;
        int cnt=0;
        string s1="";
        while(ss>>word)
        {
           mp[word]++;
            if (mp[word] > cnt)
            {
                cnt = mp[word];
                s1 = word;
            }
        }
        cout<<s1<<" "<<cnt<<endl;
    }
    return 0;
}