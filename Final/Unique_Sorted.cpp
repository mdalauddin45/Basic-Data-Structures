#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> v;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            v.push_back(y);
        }
        sort(v.begin(),v.end(),greater<int>());
        v.erase(unique(v.begin(),v.end()),v.end());
        for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}